# This perl snippet is appended to the perl module generated by SWIG
# customizing and extending its functionality

package Finance::TA;

# Tested with TA-LIB version between v0.1.2 and v0.1.3
our $VERSION = v0.1.2;


package Finance::TA::TA_Timestamp;

# Redefine &new to a friendler version accepting optional parameters
undef *new;

*new = sub {
    my $pkg = shift;
    my $self = ::Finance::TAc::new_TA_Timestamp();
    if (defined $self) {
        bless $self, $pkg;

        # Handle optional parameters
        if (@_ > 1) {
            ::Finance::TAc::TA_SetDate(@_[0..2], $self);
        }
        if (@_ > 3) {
            ::Finance::TAc::TA_SetTime(@_[3..5], $self);
        }
        if (@_ == 1) { # like: "2004-02-28 15:37:55"
            if ($_[0] =~ /(\d{2,4})-(\d{2})-(\d{2})/) {
                ::Finance::TAc::TA_SetDate($1, $2, $3, $self);
            }
            if ($_[0] =~ /(\d{2}):(\d{2}):(\d{2})/) {
                ::Finance::TAc::TA_SetTime($1, $2, $3, $self);
            }
        }
    }
    return $self;
};



package Finance::TA::TA_RetCodeInfo;

# Redefine &new to a friendler version accepting an optional parameter
undef *new;

*new = sub {
    my ($pkg, $code) = @_;
    my $self = ::Finance::TAc::new_TA_RetCodeInfo();
    bless $self, $pkg if defined($self);
    ::Finance::TA::TA_SetRetCodeInfo($code, $self) if defined($code) && defined($self);
    return $self;
};


package Finance::TA::TA_History;

# Wrapper classes arrange access to TA_History members but creation/deletion
# should be done differently.  Instead of doing new_ and delete_ (which
# use malloc/free), TA_HistoryAlloc and TA_HistoryFree has to be used.

sub new {
    #print "alloc history: @_\n";
    my $pkg = shift;
    my $self;
    # handle default parameters
    $_[6] = $::Finance::TA::TA_ALL if (@_ < 7) || !defined($_[6]);
    my @res = ::Finance::TAc::TA_HistoryAlloc(@_);
    if($res[0] == $::Finance::TA::TA_SUCCESS && defined($res[1])) {
        $self = $res[1];
        return bless $self, $pkg;
    } else {
        my %hash;
        $hash{retCode} = $res[0];
        return \%hash;  # not blessed!
    }
}

*swig_retCode_get = sub { $::Finance::TA::TA_SUCCESS };

sub DESTROY {
    return unless $_[0]->isa('HASH');
    my $self = tied(%{$_[0]});
    return unless defined $self;
    delete $ITERATORS{$self};
    if (exists $OWNER{$self}) {
		#print "free history: @_: ";
        ::Finance::TAc::TA_HistoryFree($self);
        delete $OWNER{$self};
    }
}

# Now prevent accidental direct calls to TA_HistoryAllow/TA_HistoryFree
delete $::Finance::TA::{TA_HistoryAlloc};
delete $::Finance::TA::{TA_HistoryFree};



package Finance::TA;

# Redefine exported TA_Initialize/TA_Shutdown functions 
# to be more "Perl-friendly"

our $INITIALIZED = 0;

undef *TA_Initialize;

*TA_Initialize = sub {
    if ($INITIALIZED) {
        my $retCode = TA_Shutdown();
        return $retCode if $retCode != $TA_SUCCESS;
    }
    $INITIALIZED = 1;
    # Accept calls with no parameters
    $_[0] = undef if @_ == 0;
    return ::Finance::TAc::TA_Initialize(@_);
};

undef *TA_Shutdown;

*TA_Shutdown = sub {
    if ($INITIALIZED) {
        $INITIALIZED = 0;
        return ::Finance::TAc::TA_Shutdown();
    } else {
        # We are more forgiving on multiple calls to &TA_Shutdown
        # than TA-LIB on TA_Shutdown()
        return $TA_SUCCESS;
    }
};

# SWIG does not export anything by default
# This small loop circumvents that and export everything beginning with 'TA_'
foreach (keys %Finance::TA::) {
    if (/^TA_/) {
        local *sym = $Finance::TA::{$_};        
        push(@EXPORT, "\$$_") if defined $sym;
        push(@EXPORT, "\@$_") if defined @sym;
        push(@EXPORT, "\%$_") if defined %sym;
        push(@EXPORT, $_) if defined &sym;
    }
}

END { TA_Shutdown() }

TA_Initialize() == $TA_SUCCESS;

#ifndef TA_ERROR_NUMBER_H
#define TA_ERROR_NUMBER_H

/* All possible failure should have a unique number different than zero. */
typedef enum
{
  TA_TEST_PASS = 0,

  /* Error code for test in ta_regtest.c */
  TA_REGTEST_BAD_USER_PARAM           =  1,
  TA_REGTEST_ADDDATASOURCE_FAILED     =  2,
  TA_REGTEST_HISTORYALLOC_FAILED      =  3,
  TA_REGTEST_HISTORYFREE_FAILED       =  4,
  TA_REGTEST_HISTORYALLOC_0           =  5,
  TA_REGTEST_HISTORYALLOC_1           =  6,
  TA_REGTEST_HISTORYALLOC_2           =  7,
  TA_REGTEST_HISTORYALLOC_3           =  8,
  TA_REGTEST_HISTORYALLOC_4           =  9,
  TA_REGTEST_HISTORYALLOC_5           = 10,
  TA_REGTEST_HISTORYALLOC_6           = 11,
  TA_REGTEST_HISTORYALLOC_7           = 12,
  TA_REGTEST_HISTORYALLOC_8           = 13,
  TA_REGTEST_HISTORYALLOC_9           = 14,
  TA_REGTEST_HISTORYALLOC_10          = 15,
  TA_REGTEST_HISTORYALLOC_11          = 16,
  TA_REGTEST_HISTORYALLOC_12          = 17,
  TA_REGTEST_HISTORYALLOC_13          = 18,
  TA_REGTEST_HISTORYALLOC_14          = 19,
  TA_REGTEST_HISTORYALLOC_15          = 20,
  TA_REGTEST_HISTORYALLOC_16          = 21,
  TA_REGTEST_HISTORYALLOC_17          = 22,
  TA_REGTEST_HISTORYALLOC_18          = 23,
  TA_REGTEST_HISTORYALLOC_19          = 24,
  TA_REGTEST_ADDDSOURCE_FAILED        = 25,
  TA_REGTEST_OPTIMIZATION_REF_ERROR   = 26,

  /* Error code for test in test_util.c */
  TA_TESTUTIL_INIT_FAILED             = 101,
  TA_TESTUTIL_SET_FATAL_ERROR_FAILED  = 102,
  TA_TESTUTIL_UDBASE_ALLOC_FAILED     = 103,
  TA_TESTUTIL_UDBASE_FREE_FAILED      = 104,
  TA_TESTUTIL_SHUTDOWN_FAILED         = 105,

  TA_TESTUTIL_TFRR_BAD_PARAM            = 120,
  TA_TESTUTIL_TFRR_BAD_RETCODE          = 121,
  TA_TESTUTIL_TFRR_BAD_CALCULATION      = 122,
  TA_TESTUTIL_TFRR_BAD_BEGIDX           = 123,
  TA_TESTUTIL_TFRR_BAD_OUTNBELEMENT     = 124,

  TA_TEST_TFRR_BAD_OVERLAP_OR_NAN       = 125,
  TA_TEST_TFRR_INPUT_HAS_BEEN_MODIFIED  = 126,
  TA_TEST_TFRR_CHECK_SAME_CONTENT       = 127,
  TA_TEST_TFRR_OVERLAP_OR_NAN_0         = 128,
  TA_TEST_TFRR_OVERLAP_OR_NAN_1         = 129,
  TA_TEST_TFRR_OVERLAP_OR_NAN_2         = 130,
  TA_TEST_TFRR_OVERLAP_OR_NAN_3         = 131,
  TA_TEST_TFRR_OVERLAP_OR_NAN_4         = 132,
  TA_TEST_TFRR_OVERLAP_OR_NAN_5         = 133,
  TA_TEST_TFRR_OVERLAP_OR_NAN_6         = 134,
  TA_TEST_TFRR_OVERLAP_OR_NAN_7         = 135,
  TA_TEST_TFRR_OVERLAP_OR_NAN_8         = 136,
  TA_TEST_TFRR_OVERLAP_OR_NAN_9         = 137,
  TA_TEST_TFRR_SETUNSTABLE_PERIOD_FAIL  = 138,
  TA_TEST_TFRR_NB_ELEMENT_OUT_OF_RANGE  = 139,
  TA_TEST_TFRR_BAD_MA_TYPE              = 140,
  TA_TEST_TFFR_BAD_MA_LOOKBACK          = 141,

  TA_TESTUTIL_DRT_REF_FAILED            = 150,
  TA_TESTUTIL_DRT_ALLOC_ERR             = 151,
  TA_TESTUTIL_DRT_RETCODE_ERR           = 152,
  TA_TESTUTIL_DRT_BAD_SUFFIX            = 153,
  TA_TESTUTIL_DRT_BAD_PREFIX            = 154,
  TA_TESTUTIL_DRT_MISSING_DATA          = 155,
  TA_TESTUTIL_DRT_BAD_OUTNBLEMENT       = 156,
  TA_TESTUTIL_DRT_BAD_OUTBEGIDX         = 157,
  TA_TESTUTIL_DRT_LOOKBACK_TOO_HIGH     = 158,
  TA_TESTUTIL_DRT_LOOKBACK_INCORRECT    = 159,
  TA_TESTUTIL_DRT_REF_OUTPUT_INCORRECT  = 160,

  /* Error code for test in test_period.c */
  TA_PERIOD_HISTORYALLOC_FAILED       = 200,
  TA_PERIOD_NBBAR_INCORRECT           = 201,
  TA_PERIOD_PRICE_INCORRECT           = 202,
  TA_PERIOD_OPENINTEREST_INCORRECT    = 203,
  TA_PERIOD_TIMESTAMP_YEAR_INCORRECT  = 204,
  TA_PERIOD_TIMESTAMP_MONTH_INCORRECT = 205,
  TA_PERIOD_TIMESTAMP_DAY_INCORRECT   = 206,
  TA_PERIOD_HISTORYFREE_FAILED        = 207,
  TA_PERIOD_DELTA_WEEKDAY_FAILED      = 208,
  TA_PERIOD_DELTA_WEEKDAY_FAILED_1    = 209,

  /* Error code for test in test_ascii.c */
  TA_TESTASCII_UNEXPECTED_RETCODE       = 301,
  TA_TESTASCII_FOREACHSYMBOL_FAILED     = 302,
  TA_TESTASCII_SEARCHININDEX_FAILED     = 303,
  TA_TESTASCII_CANTFIND_CATSYM_IN_INDEX = 304,
  TA_TESTASCII_SAMPLING_FILE_NOT_FOUND  = 305,
  TA_TESTASCII_CATTABLE_ALLOC_ERROR     = 306,
  TA_TESTASCII_SYMTABLE_ALLOC_ERROR     = 307,
  TA_TESTASCII_CATTABLE_FREE_ERROR      = 308,
  TA_TESTASCII_SYMTABLE_FREE_ERROR      = 309,
  TA_TESTASCII_EQV_HISTORYALLOC         = 310,
  TA_TESTASCII_EQV_DIFF_HISTORY_PTR     = 311,
  TA_TESTASCII_HISTORYFREE_FAILED       = 312,
  TA_TESTASCII_EQV_DIFF_NBBARS          = 313,
  TA_TESTASCII_EQV_DIFF_PERIOD          = 314,
  TA_TESTASCII_EQV_DIFF_VALUE           = 315,
  TA_TESTASCII_UDBASEFREE_FAILED        = 316,
  TA_TESTASCII_EQV_BAD_FILENAME         = 317,
  TA_TESTASCII_EQV_ADDDATASOURCE        = 318,
  TA_TESTASCII_EQV_BAD_FIELD_ID         = 319,
  TA_TESTASCII_REFHISTORYFREE_FAILED    = 320,
  TA_TESTASCII_EQV_DIFF_DATA            = 321,
  TA_TESTASCII_CATSYM_NOT_FOUND         = 322,

  /* Error code for test in test_yahoo.c */
  TA_YAHOO_ADDDATASOURCE_USA_FAILED     = 330,
  TA_YAHOO_HISTORYALLOC_1_FAILED        = 331,
  TA_YAHOO_HISTORYALLOC_2_FAILED        = 332,
  TA_YAHOO_HISTORYALLOC_3_FAILED        = 333,
  TA_YAHOO_HISTORYFREE_FAILED           = 334,
  TA_YAHOO_VALUE_1_FAILED               = 335,
  TA_YAHOO_VALUE_2_FAILED               = 336,
  TA_YAHOO_VALUE_3_FAILED               = 337,
  TA_YAHOO_FIELD_MISSING_1              = 338,
  TA_YAHOO_FIELD_MISSING_2              = 339,
  TA_YAHOO_FIELD_MISSING_3              = 340,
  TA_YAHOO_CRS_HISTORYALLOC_FAILED      = 341,
  TA_YAHOO_CRS_NBBARSBAD                = 342,
  TA_YAHOO_CRS_PRICEBARBAD              = 343,
  TA_YAHOO_ADDDATASOURCE_CAN_FAILED     = 344,

  /* Error code for test in test_pm.c */
  TA_PM_EMPTY_TA_TRADE_LOG_TESTS_0      = 400,
  TA_PM_EMPTY_TA_TRADE_LOG_TESTS_1      = 401,
  TA_PM_EMPTY_TA_TRADE_LOG_TESTS_2      = 402,
  TA_PM_EMPTY_TA_TRADE_LOG_TESTS_3      = 403,
  TA_PM_EMPTY_TA_TRADE_LOG_TESTS_4      = 404,
  TA_PM_EMPTY_TA_TRADELOGFREE_FAILED    = 405,
  TA_PM_ERR_INVALID_KEY_TYPE            = 406,
  TA_PM_TRADELOGADD_ONE_TRADE_FAILED    = 407,
  TA_PM_TRADELOGFREE_ONE_TRADE_FAILED   = 408,
  TA_PM_2TRADETST_BAD_TRADE_TYPE        = 409,
  TA_PM_2TRADETST_TRADELOGADD_1         = 410,
  TA_PM_2TRADETST_TRADELOGADD_2         = 411,
  TA_PM_2TRADETST_PMALLOC_FAILED        = 412,
  TA_PM_2TRADETST_PMADDTRADELOG_FAILED  = 413,
  TA_PM_2TRADETST_PMFREE_FAILED         = 414,
  TA_PM_CHECKVALUE_FAILED_0             = 415,
  TA_PM_CHECKVALUE_FAILED_1             = 416,
  TA_PM_CHECKVALUE_FAILED_2             = 417,
  TA_PM_CHECKVALUE_FAILED_3             = 418,
  TA_PM_CHECKVALUE_FAILED_4             = 419,
  TA_PM_CHECKVALUE_FAILED_5             = 420,
  TA_PM_CHECKVALUE_FAILED_6             = 421,
  TA_PM_CHECKVALUE_FAILED_7             = 422,
  TA_PM_CHECKVALUE_FAILED_8             = 423,
  TA_PM_CHECKVALUE_FAILED_9             = 424,
  TA_PM_CHECKVALUE_FAILED_10            = 425,
  TA_PM_ERR_CHECK_NO_HANG_1             = 426,
  TA_PM_ERR_CHECK_NO_HANG_2             = 427,
  TA_PM_ERR_CHECK_NO_HANG_3             = 428,
  TA_PM_ERR_CHECK_NO_HANG_4             = 429,
  TA_PM_ERR_CHECK_NO_HANG_5             = 430,
  TA_PM_ERR_CHECK_NO_HANG_6             = 431,
  TA_PM_TRADELOGADD_ONE_TRADE_FAILED_1  = 432,
  TA_PM_TRADELOGADD_ONE_TRADE_FAILED_2  = 433,
  TA_PM_TRADELOGADD_ONE_TRADE_FAILED_3  = 434,
  TA_PM_UNKNOWN_TRANSACTION_TYPE        = 435,
  TA_PM_REPORT_ALLOC_FAILED             = 436,
  TA_PM_TEST_VALUE_ID_FAILED_0          = 437,
  TA_PM_TEST_VALUE_ID_FAILED_1          = 438,
  TA_PM_TEST_VALUE_ID_FAILED_2          = 439,
  TA_PM_TEST_VALUE_ID_FAILED_3          = 440,
  TA_PM_TEST_VALUE_ID_FAILED_4          = 441,
  TA_PM_TEST_VALUE_ID_FAILED_5          = 442,
  TA_PM_TEST_VALUE_ID_FAILED_6          = 443,
  TA_PM_TEST_VALUE_ID_FAILED_7          = 444,
  TA_PM_TEST_VALUE_ID_FAILED_8          = 445,
  TA_PM_TEST_VALUE_ID_FAILED_9          = 446,
  TA_PM_VALUE_TO_FILE_FAILED            = 447,
  TA_PM_TEST_ARRAY_ID_FAILED_0          = 448,
  TA_PM_TEST_ARRAY_ID_FAILED_1          = 449,
  TA_PM_TEST_ARRAY_ID_FAILED_2          = 450,
  TA_PM_TEST_ARRAY_ID_FAILED_3          = 451,
  TA_PM_TEST_ARRAY_ID_FAILED_4          = 452,
  TA_PM_TEST_ARRAY_ID_FAILED_5          = 453,
  TA_PM_TEST_ARRAY_ID_FAILED_6          = 454,
  TA_PM_TEST_ARRAY_ID_FAILED_7          = 455,
  TA_PM_TEST_ARRAY_ID_FAILED_8          = 456,
  TA_PM_TEST_ARRAY_ID_FAILED_9          = 457,
  TA_PM_TEST_ARRAY_WITH_INVALID_DATE    = 458,

  /* Error code related to call to ta_abstract */
  TA_ABS_TST_FAIL_GETFUNCHANDLE         = 600,
  TA_ABS_TST_FAIL_GETFUNCINFO           = 601,
  TA_ABS_TST_FAIL_PARAMHOLDERALLOC      = 602,
  TA_ABS_TST_FAIL_PARAMHOLDERFREE       = 603,
  TA_ABS_TST_FAIL_PARAMREALPTR          = 604,
  TA_ABS_TST_FAIL_OPTINPUTPARAMINTEGER  = 605,
  TA_ABS_TST_FAIL_SETOUTPUTPARAMREALPTR = 606,
  TA_ABS_TST_FAIL_CALLFUNC              = 607,
  TA_ABS_TST_FAIL_GETLOOKBACK_CALL_1    = 608,
  TA_ABS_TST_FAIL_GETLOOKBACK_CALL_2    = 609,
  TA_ABS_TST_FAIL_GETLOOKBACK_1         = 610,
  TA_ABS_TST_FAIL_GETLOOKBACK_2         = 611,

  /* Error code related to internal tests. */
  TA_CIRC_BUFF_FAIL_0 = 700,
  TA_CIRC_BUFF_FAIL_1 = 701,
  TA_CIRC_BUFF_FAIL_2 = 702,
  TA_CIRC_BUFF_FAIL_3 = 703,
  TA_CIRC_BUFF_FAIL_4 = 704,
  TA_CIRC_BUFF_FAIL_5 = 705,
  TA_CIRC_BUFF_FAIL_6 = 706,


  /* Error code related to CSI data source tests. */
  TA_CSI_ADDDATASOURCE_FAILED    = 800,
  TA_CSI_HISTORYALLOC_1_FAILED   = 801,
  TA_CSI_VALUE_1_FAILED          = 802,
  TA_CSI_FIELD_MISSING_1         = 803,
  TA_CSI_HISTORYFREE_FAILED      = 804,
  TA_CSI_HISTORYALLOC_3_FAILED   = 805,
  TA_CSI_CRS_HISTORYALLOC_FAILED = 806,
  TA_CSI_CRS_NBBARSBAD           = 807,
  TA_CSI_CRS_PRICEBARBAD         = 808,
 

  TA_LAST_VALID_ERROR = 0xFFFF
} ErrorNumber;
#endif

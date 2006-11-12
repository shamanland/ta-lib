/* TA-LIB Copyright (c) 1999-2006, Mario Fortier
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or
 * without modification, are permitted provided that the following
 * conditions are met:
 *
 * - Redistributions of source code must retain the above copyright
 *   notice, this list of conditions and the following disclaimer.
 *
 * - Redistributions in binary form must reproduce the above copyright
 *   notice, this list of conditions and the following disclaimer in
 *   the documentation and/or other materials provided with the
 *   distribution.
 *
 * - Neither name of author nor the names of its contributors
 *   may be used to endorse or promote products derived from this
 *   software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * ``AS IS'' AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * REGENTS OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS
 * OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY,
 * WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE
 * OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE,
 * EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/* List of contributors:
 *
 *  Initial  Name/description
 *  -------------------------------------------------------------------
 *  MF       Mario Fortier
 *
 *
 * Change history:
 *
 *  MMDDYY BY   Description
 *  -------------------------------------------------------------------
 *  112400 MF   Template creation.
 *  022203 MF   Add MAMA
 *  040503 MF   Add T3
 *  052603 MF   Adapt code to compile with .NET Managed C++
 *  111603 MF   Allow period of 1. Just copy input into output.
 */

/**** START GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
/* All code within this section is automatically
 * generated by gen_code. Any modification will be lost
 * next time gen_code is run.
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */    #include "TA-Lib-Core.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (NAMESPACE(TA_RetCode)TA_INTERNAL_ERROR)
/* Generated */    namespace TicTacTec { namespace TA { namespace Lib {
/* Generated */ #elif defined( _JAVA )
/* Generated */    #include "ta_defs.h"
/* Generated */    #define TA_INTERNAL_ERROR(Id) (NAMESPACE(TA_RetCode)TA_INTERNAL_ERROR)
/* Generated */ #else
/* Generated */    #include <string.h>
/* Generated */    #include <math.h>
/* Generated */    #include "ta_func.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_UTILITY_H
/* Generated */    #include "ta_utility.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #ifndef TA_MEMORY_H
/* Generated */    #include "ta_memory.h"
/* Generated */ #endif
/* Generated */ 
/* Generated */ #define TA_PREFIX(x) TA_##x
/* Generated */ #define INPUT_TYPE   double
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ int Core::MA_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                      TA_MAType     optInMAType ) /* Generated */ 
/* Generated */ #elif defined( _JAVA )
/* Generated */ public int MA_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                       TA_MAType     optInMAType ) /* Generated */ 
/* Generated */ #else
/* Generated */ int TA_MA_Lookback( int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                   TA_MAType     optInMAType ) /* Generated */ 
/* Generated */ #endif
/**** END GENCODE SECTION 1 - DO NOT DELETE THIS LINE ****/
{
   /* insert local variable here */
   int retValue;

/**** START GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 30;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = 0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return -1;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/**** END GENCODE SECTION 2 - DO NOT DELETE THIS LINE ****/

   /* insert lookback code here. */

   if( optInTimePeriod <= 1 )
      return 0;
   
   switch( optInMAType )
   {
   case ENUM_CASE(TA_MAType,TA_MAType_SMA):
      retValue = LOOKBACK_CALL(SMA)( optInTimePeriod );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_EMA):
      retValue = LOOKBACK_CALL(EMA)( optInTimePeriod );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_WMA):
      retValue = LOOKBACK_CALL(WMA)( optInTimePeriod );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_DEMA):
      retValue = LOOKBACK_CALL(DEMA)( optInTimePeriod );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_TEMA):
      retValue = LOOKBACK_CALL(TEMA)( optInTimePeriod );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_TRIMA):
      retValue = LOOKBACK_CALL(TRIMA)( optInTimePeriod );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_KAMA):
      retValue = LOOKBACK_CALL(KAMA)( optInTimePeriod );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_MAMA):
      retValue = LOOKBACK_CALL(MAMA)( 0.5, 0.05 );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_T3):
      retValue = LOOKBACK_CALL(T3)( optInTimePeriod, 0.7 );
      break;

   default:
      retValue = 0;
   }

   return retValue;
}

/**** START GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
/*
 * TA_MA - All Moving Average
 * 
 * Input  = double
 * Output = double
 * 
 * Optional Parameters
 * -------------------
 * optInTimePeriod:(From 1 to 100000)
 *    Number of period
 * 
 * optInMAType:
 *    Type of Moving Average
 * 
 * 
 */
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::MA( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       cli::array<double>^ inReal,
/* Generated */                                       int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                       TA_MAType     optInMAType,
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNbElement,
/* Generated */                                       cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public TA_RetCode MA( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       double       inReal[],
/* Generated */                       int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                       TA_MAType     optInMAType,
/* Generated */                       MInteger     outBegIdx,
/* Generated */                       MInteger     outNbElement,
/* Generated */                       double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_MA( int    startIdx,
/* Generated */                   int    endIdx,
/* Generated */                   const double inReal[],
/* Generated */                   int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                   TA_MAType     optInMAType,
/* Generated */                   int          *outBegIdx,
/* Generated */                   int          *outNbElement,
/* Generated */                   double        outReal[] )
/* Generated */ #endif
/**** END GENCODE SECTION 3 - DO NOT DELETE THIS LINE ****/
{
   /* Insert local variables here. */
   ARRAY_REF(dummyBuffer);
   TA_RetCode retCode;

   int nbElement;
   int outIdx, todayIdx;

/**** START GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */ 
/* Generated */    /* Validate the requested output range. */
/* Generated */    if( startIdx < 0 )
/* Generated */       return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_START_INDEX;
/* Generated */    if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */       return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_END_INDEX;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( !inReal ) return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    /* min/max are checked for optInTimePeriod. */
/* Generated */    if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */       optInTimePeriod = 30;
/* Generated */    else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */       optInMAType = 0;
/* Generated */    else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA)*/
/* Generated */    #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */    if( !outReal )
/* Generated */       return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */ 
/* Generated */    #endif /* !defined(_MANAGED) && !defined(_JAVA) */
/* Generated */ #endif /* TA_FUNC_NO_RANGE_CHECK */
/* Generated */ 
/**** END GENCODE SECTION 4 - DO NOT DELETE THIS LINE ****/

   if( optInTimePeriod == 1 )
   {
      nbElement = endIdx-startIdx+1;
      VALUE_HANDLE_DEREF(outNbElement) = nbElement;      
      for( todayIdx=startIdx, outIdx=0; outIdx < nbElement; outIdx++, todayIdx++ )
         outReal[outIdx] = inReal[todayIdx];
      VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
      return NAMESPACE(TA_RetCode)TA_SUCCESS;
   }
   /* Simply call the internal implementation of the
    * requested moving average.
    */
   switch( optInMAType )
   {
   case ENUM_CASE(TA_MAType,TA_MAType_SMA):
      retCode = FUNCTION_CALL(INT_SMA)( startIdx, endIdx, inReal, optInTimePeriod,
                                        outBegIdx, outNbElement, outReal );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_EMA):
      retCode = FUNCTION_CALL(INT_EMA)( startIdx, endIdx, inReal,
                                        optInTimePeriod, PER_TO_K(optInTimePeriod),
                                        outBegIdx, outNbElement, outReal );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_WMA):
      retCode = FUNCTION_CALL(WMA)( startIdx, endIdx, inReal, optInTimePeriod,
                                    outBegIdx, outNbElement, outReal );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_DEMA):
      retCode = FUNCTION_CALL(DEMA)( startIdx, endIdx, inReal, optInTimePeriod,
                                     outBegIdx, outNbElement, outReal );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_TEMA):
      retCode = FUNCTION_CALL(TEMA)( startIdx, endIdx, inReal, optInTimePeriod,
                                     outBegIdx, outNbElement, outReal );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_TRIMA):
      retCode = FUNCTION_CALL(TRIMA)( startIdx, endIdx, inReal, optInTimePeriod,
                                      outBegIdx, outNbElement, outReal );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_KAMA):
      retCode = FUNCTION_CALL(KAMA)( startIdx, endIdx, inReal, optInTimePeriod,
                                     outBegIdx, outNbElement, outReal );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_MAMA):
      /* The optInTimePeriod is ignored and the FAMA output of the MAMA
       * is ignored.
       */
      ARRAY_ALLOC(dummyBuffer, (endIdx-startIdx+1) );

      #if !defined( _JAVA )
         if( !dummyBuffer )
            return NAMESPACE(TA_RetCode)TA_ALLOC_ERR;
      #endif

      retCode = FUNCTION_CALL(MAMA)( startIdx, endIdx, inReal, 0.5, 0.05,                           
                                     outBegIdx, outNbElement,
                                     outReal, dummyBuffer );
                         
      ARRAY_FREE( dummyBuffer );
      break;

   case ENUM_CASE(TA_MAType,TA_MAType_T3):
      retCode = FUNCTION_CALL(T3)( startIdx, endIdx, inReal,
                                   optInTimePeriod, 0.7,
                                   outBegIdx, outNbElement, outReal );
      break;

   default: 
      retCode = NAMESPACE(TA_RetCode)TA_BAD_PARAM;
      break;
   }

   return retCode;
}

/**** START GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/
/* Generated */ 
/* Generated */ #define  USE_SINGLE_PRECISION_INPUT
/* Generated */ #if !defined( _MANAGED ) && !defined( _JAVA )
/* Generated */    #undef   TA_PREFIX
/* Generated */    #define  TA_PREFIX(x) TA_S_##x
/* Generated */ #endif
/* Generated */ #undef   INPUT_TYPE
/* Generated */ #define  INPUT_TYPE float
/* Generated */ #if defined( _MANAGED )
/* Generated */ enum class Core::TA_RetCode Core::MA( int    startIdx,
/* Generated */                                       int    endIdx,
/* Generated */                                       cli::array<float>^ inReal,
/* Generated */                                       int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                                       TA_MAType     optInMAType,
/* Generated */                                       [Out]int%    outBegIdx,
/* Generated */                                       [Out]int%    outNbElement,
/* Generated */                                       cli::array<double>^  outReal )
/* Generated */ #elif defined( _JAVA )
/* Generated */ public TA_RetCode MA( int    startIdx,
/* Generated */                       int    endIdx,
/* Generated */                       float        inReal[],
/* Generated */                       int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                       TA_MAType     optInMAType,
/* Generated */                       MInteger     outBegIdx,
/* Generated */                       MInteger     outNbElement,
/* Generated */                       double        outReal[] )
/* Generated */ #else
/* Generated */ TA_RetCode TA_S_MA( int    startIdx,
/* Generated */                     int    endIdx,
/* Generated */                     const float  inReal[],
/* Generated */                     int           optInTimePeriod, /* From 1 to 100000 */
/* Generated */                     TA_MAType     optInMAType,
/* Generated */                     int          *outBegIdx,
/* Generated */                     int          *outNbElement,
/* Generated */                     double        outReal[] )
/* Generated */ #endif
/* Generated */ {
/* Generated */    ARRAY_REF(dummyBuffer);
/* Generated */    TA_RetCode retCode;
/* Generated */    int nbElement;
/* Generated */    int outIdx, todayIdx;
/* Generated */  #ifndef TA_FUNC_NO_RANGE_CHECK
/* Generated */     if( startIdx < 0 )
/* Generated */        return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_START_INDEX;
/* Generated */     if( (endIdx < 0) || (endIdx < startIdx))
/* Generated */        return NAMESPACE(TA_RetCode)TA_OUT_OF_RANGE_END_INDEX;
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( !inReal ) return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #endif 
/* Generated */     if( (int)optInTimePeriod == TA_INTEGER_DEFAULT )
/* Generated */        optInTimePeriod = 30;
/* Generated */     else if( ((int)optInTimePeriod < 1) || ((int)optInTimePeriod > 100000) )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( (int)optInMAType == TA_INTEGER_DEFAULT )
/* Generated */        optInMAType = 0;
/* Generated */     else if( ((int)optInMAType < 0) || ((int)optInMAType > 8) )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #endif 
/* Generated */     #if !defined(_MANAGED) && !defined(_JAVA)
/* Generated */     if( !outReal )
/* Generated */        return NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */     #endif 
/* Generated */  #endif 
/* Generated */    if( optInTimePeriod == 1 )
/* Generated */    {
/* Generated */       nbElement = endIdx-startIdx+1;
/* Generated */       VALUE_HANDLE_DEREF(outNbElement) = nbElement;      
/* Generated */       for( todayIdx=startIdx, outIdx=0; outIdx < nbElement; outIdx++, todayIdx++ )
/* Generated */          outReal[outIdx] = inReal[todayIdx];
/* Generated */       VALUE_HANDLE_DEREF(outBegIdx)    = startIdx;
/* Generated */       return NAMESPACE(TA_RetCode)TA_SUCCESS;
/* Generated */    }
/* Generated */    switch( optInMAType )
/* Generated */    {
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_SMA):
/* Generated */       retCode = FUNCTION_CALL(INT_SMA)( startIdx, endIdx, inReal, optInTimePeriod,
/* Generated */                                         outBegIdx, outNbElement, outReal );
/* Generated */       break;
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_EMA):
/* Generated */       retCode = FUNCTION_CALL(INT_EMA)( startIdx, endIdx, inReal,
/* Generated */                                         optInTimePeriod, PER_TO_K(optInTimePeriod),
/* Generated */                                         outBegIdx, outNbElement, outReal );
/* Generated */       break;
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_WMA):
/* Generated */       retCode = FUNCTION_CALL(WMA)( startIdx, endIdx, inReal, optInTimePeriod,
/* Generated */                                     outBegIdx, outNbElement, outReal );
/* Generated */       break;
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_DEMA):
/* Generated */       retCode = FUNCTION_CALL(DEMA)( startIdx, endIdx, inReal, optInTimePeriod,
/* Generated */                                      outBegIdx, outNbElement, outReal );
/* Generated */       break;
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_TEMA):
/* Generated */       retCode = FUNCTION_CALL(TEMA)( startIdx, endIdx, inReal, optInTimePeriod,
/* Generated */                                      outBegIdx, outNbElement, outReal );
/* Generated */       break;
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_TRIMA):
/* Generated */       retCode = FUNCTION_CALL(TRIMA)( startIdx, endIdx, inReal, optInTimePeriod,
/* Generated */                                       outBegIdx, outNbElement, outReal );
/* Generated */       break;
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_KAMA):
/* Generated */       retCode = FUNCTION_CALL(KAMA)( startIdx, endIdx, inReal, optInTimePeriod,
/* Generated */                                      outBegIdx, outNbElement, outReal );
/* Generated */       break;
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_MAMA):
/* Generated */       ARRAY_ALLOC(dummyBuffer, (endIdx-startIdx+1) );
/* Generated */       #if !defined( _JAVA )
/* Generated */          if( !dummyBuffer )
/* Generated */             return NAMESPACE(TA_RetCode)TA_ALLOC_ERR;
/* Generated */       #endif
/* Generated */       retCode = FUNCTION_CALL(MAMA)( startIdx, endIdx, inReal, 0.5, 0.05,                           
/* Generated */                                      outBegIdx, outNbElement,
/* Generated */                                      outReal, dummyBuffer );
/* Generated */       ARRAY_FREE( dummyBuffer );
/* Generated */       break;
/* Generated */    case ENUM_CASE(TA_MAType,TA_MAType_T3):
/* Generated */       retCode = FUNCTION_CALL(T3)( startIdx, endIdx, inReal,
/* Generated */                                    optInTimePeriod, 0.7,
/* Generated */                                    outBegIdx, outNbElement, outReal );
/* Generated */       break;
/* Generated */    default: 
/* Generated */       retCode = NAMESPACE(TA_RetCode)TA_BAD_PARAM;
/* Generated */       break;
/* Generated */    }
/* Generated */    return retCode;
/* Generated */ }
/* Generated */ 
/* Generated */ #if defined( _MANAGED )
/* Generated */ }}} // Close namespace TicTacTec.TA.Lib
/* Generated */ #endif
/**** END GENCODE SECTION 5 - DO NOT DELETE THIS LINE ****/


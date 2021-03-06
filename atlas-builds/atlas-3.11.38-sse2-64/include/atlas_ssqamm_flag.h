#ifndef ATLAS_SAMM_FLAG_H
   #define ATLAS_SAMM_FLAG_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 48
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 48
#endif
static const unsigned char ATL_AMM_KFLAG[48] =
{
     2,  /* index 0 */
     2,  /* index 1 */
     0,  /* index 2 */
     2,  /* index 3 */
     0,  /* index 4 */
     2,  /* index 5 */
     0,  /* index 6 */
     2,  /* index 7 */
     2,  /* index 8 */
     2,  /* index 9 */
     2,  /* index 10 */
     2,  /* index 11 */
     2,  /* index 12 */
     2,  /* index 13 */
     2,  /* index 14 */
     2,  /* index 15 */
     2,  /* index 16 */
     2,  /* index 17 */
     2,  /* index 18 */
     2,  /* index 19 */
     2,  /* index 20 */
     2,  /* index 21 */
     2,  /* index 22 */
     2,  /* index 23 */
     2,  /* index 24 */
     2,  /* index 25 */
     2,  /* index 26 */
     2,  /* index 27 */
     2,  /* index 28 */
     2,  /* index 29 */
     2,  /* index 30 */
     2,  /* index 31 */
     2,  /* index 32 */
     2,  /* index 33 */
     2,  /* index 34 */
     2,  /* index 35 */
     2,  /* index 36 */
     2,  /* index 37 */
     2,  /* index 38 */
     2,  /* index 39 */
     2,  /* index 40 */
     2,  /* index 41 */
     2,  /* index 42 */
     2,  /* index 43 */
     2,  /* index 44 */
     2,  /* index 45 */
     2,  /* index 46 */
     2   /* index 47 */
};

#define ATL_AMM_KRUNTIME(idx_) (ATL_AMM_KFLAG[idx_] & 1)
#define ATL_AMM_KMAJOR(idx_) (ATL_AMM_KFLAG[idx_] & 2)

#endif  /* end include file guard */

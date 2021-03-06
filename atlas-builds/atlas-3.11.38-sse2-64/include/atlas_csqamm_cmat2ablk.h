#ifndef ATLAS_CAMM_CMAT2ABLK_H
   #define ATLAS_CAMM_CMAT2ABLK_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 18
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 18
#endif

void ATL_ccmat2ablk_4x2_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_4x2_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_12x3_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_a1_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_a1_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_a1_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_a1_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_an_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_an_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_an_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_an_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_aX_b0
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_aX_b1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_aX_bn
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);
void ATL_ccmat2ablk_32x1_aX_bX
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,const SCALAR,TYPE*,TYPE*);

static const cmat2ablk_t ATL_AMM_C2BLK_a1_b0[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 0 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 1 */
   ATL_ccmat2ablk_12x3_a1_b0,  /* index 2 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 3 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 4 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 5 */
   ATL_ccmat2ablk_32x1_a1_b0,  /* index 6 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 7 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 8 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 9 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 10 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 11 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 12 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 13 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 14 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 15 */
   ATL_ccmat2ablk_4x2_a1_b0,  /* index 16 */
   ATL_ccmat2ablk_4x2_a1_b0   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_a1_b1[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 0 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 1 */
   ATL_ccmat2ablk_12x3_a1_b1,  /* index 2 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 3 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 4 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 5 */
   ATL_ccmat2ablk_32x1_a1_b1,  /* index 6 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 7 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 8 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 9 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 10 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 11 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 12 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 13 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 14 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 15 */
   ATL_ccmat2ablk_4x2_a1_b1,  /* index 16 */
   ATL_ccmat2ablk_4x2_a1_b1   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_a1_bn[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 0 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 1 */
   ATL_ccmat2ablk_12x3_a1_bn,  /* index 2 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 3 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 4 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 5 */
   ATL_ccmat2ablk_32x1_a1_bn,  /* index 6 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 7 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 8 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 9 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 10 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 11 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 12 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 13 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 14 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 15 */
   ATL_ccmat2ablk_4x2_a1_bn,  /* index 16 */
   ATL_ccmat2ablk_4x2_a1_bn   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_a1_bX[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 0 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 1 */
   ATL_ccmat2ablk_12x3_a1_bX,  /* index 2 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 3 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 4 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 5 */
   ATL_ccmat2ablk_32x1_a1_bX,  /* index 6 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 7 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 8 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 9 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 10 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 11 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 12 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 13 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 14 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 15 */
   ATL_ccmat2ablk_4x2_a1_bX,  /* index 16 */
   ATL_ccmat2ablk_4x2_a1_bX   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_an_b0[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_an_b0,  /* index 0 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 1 */
   ATL_ccmat2ablk_12x3_an_b0,  /* index 2 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 3 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 4 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 5 */
   ATL_ccmat2ablk_32x1_an_b0,  /* index 6 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 7 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 8 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 9 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 10 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 11 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 12 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 13 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 14 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 15 */
   ATL_ccmat2ablk_4x2_an_b0,  /* index 16 */
   ATL_ccmat2ablk_4x2_an_b0   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_an_b1[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_an_b1,  /* index 0 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 1 */
   ATL_ccmat2ablk_12x3_an_b1,  /* index 2 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 3 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 4 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 5 */
   ATL_ccmat2ablk_32x1_an_b1,  /* index 6 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 7 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 8 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 9 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 10 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 11 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 12 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 13 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 14 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 15 */
   ATL_ccmat2ablk_4x2_an_b1,  /* index 16 */
   ATL_ccmat2ablk_4x2_an_b1   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_an_bn[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_an_bn,  /* index 0 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 1 */
   ATL_ccmat2ablk_12x3_an_bn,  /* index 2 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 3 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 4 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 5 */
   ATL_ccmat2ablk_32x1_an_bn,  /* index 6 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 7 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 8 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 9 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 10 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 11 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 12 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 13 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 14 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 15 */
   ATL_ccmat2ablk_4x2_an_bn,  /* index 16 */
   ATL_ccmat2ablk_4x2_an_bn   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_an_bX[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_an_bX,  /* index 0 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 1 */
   ATL_ccmat2ablk_12x3_an_bX,  /* index 2 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 3 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 4 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 5 */
   ATL_ccmat2ablk_32x1_an_bX,  /* index 6 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 7 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 8 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 9 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 10 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 11 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 12 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 13 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 14 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 15 */
   ATL_ccmat2ablk_4x2_an_bX,  /* index 16 */
   ATL_ccmat2ablk_4x2_an_bX   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_aX_b0[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 0 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 1 */
   ATL_ccmat2ablk_12x3_aX_b0,  /* index 2 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 3 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 4 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 5 */
   ATL_ccmat2ablk_32x1_aX_b0,  /* index 6 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 7 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 8 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 9 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 10 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 11 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 12 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 13 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 14 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 15 */
   ATL_ccmat2ablk_4x2_aX_b0,  /* index 16 */
   ATL_ccmat2ablk_4x2_aX_b0   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_aX_b1[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 0 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 1 */
   ATL_ccmat2ablk_12x3_aX_b1,  /* index 2 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 3 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 4 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 5 */
   ATL_ccmat2ablk_32x1_aX_b1,  /* index 6 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 7 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 8 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 9 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 10 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 11 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 12 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 13 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 14 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 15 */
   ATL_ccmat2ablk_4x2_aX_b1,  /* index 16 */
   ATL_ccmat2ablk_4x2_aX_b1   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_aX_bn[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 0 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 1 */
   ATL_ccmat2ablk_12x3_aX_bn,  /* index 2 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 3 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 4 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 5 */
   ATL_ccmat2ablk_32x1_aX_bn,  /* index 6 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 7 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 8 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 9 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 10 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 11 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 12 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 13 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 14 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 15 */
   ATL_ccmat2ablk_4x2_aX_bn,  /* index 16 */
   ATL_ccmat2ablk_4x2_aX_bn   /* index 17 */
};

static const cmat2ablk_t ATL_AMM_C2BLK_aX_bX[ATL_AMM_NCASES] =
{
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 0 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 1 */
   ATL_ccmat2ablk_12x3_aX_bX,  /* index 2 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 3 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 4 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 5 */
   ATL_ccmat2ablk_32x1_aX_bX,  /* index 6 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 7 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 8 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 9 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 10 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 11 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 12 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 13 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 14 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 15 */
   ATL_ccmat2ablk_4x2_aX_bX,  /* index 16 */
   ATL_ccmat2ablk_4x2_aX_bX   /* index 17 */
};


#endif  /* end include file guard */

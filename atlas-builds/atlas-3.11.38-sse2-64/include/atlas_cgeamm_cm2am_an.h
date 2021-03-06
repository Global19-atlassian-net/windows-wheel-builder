#ifndef ATLAS_CAMM_cm2am_an_H
   #define ATLAS_CAMM_cm2am_an_H

#include "atlas_amm.h"
#ifdef ATL_AMM_NCASES
   #if ATL_AMM_NCASES != 17
      #error "NCASES MISMATCH!"
   #endif
#else
   #define ATL_AMM_NCASES 17
#endif
/*
 * mat2blk prototypes
 */
void ATL_ccm2am_an_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_4x4
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_4x4C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_4x2
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_4x2C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_12
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_12C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_3
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_3C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_32
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_32C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_1
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_ccm2am_an_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);
void ATL_crm2am_an_1C
   (ATL_CSZT,ATL_CSZT,const SCALAR,const TYPE*,ATL_CSZT,TYPE*,TYPE*);

static const cm2am_t ATL_AMM_A2BLK_an[17] =
{
   ATL_ccm2am_an_4x4,  /* index 0 */
   ATL_ccm2am_an_4x4,  /* index 1 */
   ATL_ccm2am_an_12,  /* index 2 */
   ATL_ccm2am_an_4x4,  /* index 3 */
   ATL_ccm2am_an_32,  /* index 4 */
   ATL_ccm2am_an_32,  /* index 5 */
   ATL_ccm2am_an_4x4,  /* index 6 */
   ATL_ccm2am_an_4x4,  /* index 7 */
   ATL_ccm2am_an_4x4,  /* index 8 */
   ATL_ccm2am_an_4x4,  /* index 9 */
   ATL_ccm2am_an_4x4,  /* index 10 */
   ATL_ccm2am_an_4x4,  /* index 11 */
   ATL_ccm2am_an_4x4,  /* index 12 */
   ATL_ccm2am_an_4x4,  /* index 13 */
   ATL_ccm2am_an_4x4,  /* index 14 */
   ATL_ccm2am_an_4x4,  /* index 15 */
   ATL_ccm2am_an_4x4   /* index 16 */
};

static const cm2am_t ATL_AMM_AT2BLK_an[17] =
{
   ATL_crm2am_an_4x4,  /* index 0 */
   ATL_crm2am_an_4x4,  /* index 1 */
   ATL_crm2am_an_12,  /* index 2 */
   ATL_crm2am_an_4x4,  /* index 3 */
   ATL_crm2am_an_32,  /* index 4 */
   ATL_crm2am_an_32,  /* index 5 */
   ATL_crm2am_an_4x4,  /* index 6 */
   ATL_crm2am_an_4x4,  /* index 7 */
   ATL_crm2am_an_4x4,  /* index 8 */
   ATL_crm2am_an_4x4,  /* index 9 */
   ATL_crm2am_an_4x4,  /* index 10 */
   ATL_crm2am_an_4x4,  /* index 11 */
   ATL_crm2am_an_4x4,  /* index 12 */
   ATL_crm2am_an_4x4,  /* index 13 */
   ATL_crm2am_an_4x4,  /* index 14 */
   ATL_crm2am_an_4x4,  /* index 15 */
   ATL_crm2am_an_4x4   /* index 16 */
};

static const cm2am_t ATL_AMM_B2BLK_an[17] =
{
   ATL_ccm2am_an_4x2,  /* index 0 */
   ATL_ccm2am_an_4x2,  /* index 1 */
   ATL_ccm2am_an_3,  /* index 2 */
   ATL_ccm2am_an_4x2,  /* index 3 */
   ATL_ccm2am_an_1,  /* index 4 */
   ATL_ccm2am_an_1,  /* index 5 */
   ATL_ccm2am_an_4x2,  /* index 6 */
   ATL_ccm2am_an_4x2,  /* index 7 */
   ATL_ccm2am_an_4x2,  /* index 8 */
   ATL_ccm2am_an_4x2,  /* index 9 */
   ATL_ccm2am_an_4x2,  /* index 10 */
   ATL_ccm2am_an_4x2,  /* index 11 */
   ATL_ccm2am_an_4x2,  /* index 12 */
   ATL_ccm2am_an_4x2,  /* index 13 */
   ATL_ccm2am_an_4x2,  /* index 14 */
   ATL_ccm2am_an_4x2,  /* index 15 */
   ATL_ccm2am_an_4x2   /* index 16 */
};

static const cm2am_t ATL_AMM_BT2BLK_an[17] =
{
   ATL_crm2am_an_4x2,  /* index 0 */
   ATL_crm2am_an_4x2,  /* index 1 */
   ATL_crm2am_an_3,  /* index 2 */
   ATL_crm2am_an_4x2,  /* index 3 */
   ATL_crm2am_an_1,  /* index 4 */
   ATL_crm2am_an_1,  /* index 5 */
   ATL_crm2am_an_4x2,  /* index 6 */
   ATL_crm2am_an_4x2,  /* index 7 */
   ATL_crm2am_an_4x2,  /* index 8 */
   ATL_crm2am_an_4x2,  /* index 9 */
   ATL_crm2am_an_4x2,  /* index 10 */
   ATL_crm2am_an_4x2,  /* index 11 */
   ATL_crm2am_an_4x2,  /* index 12 */
   ATL_crm2am_an_4x2,  /* index 13 */
   ATL_crm2am_an_4x2,  /* index 14 */
   ATL_crm2am_an_4x2,  /* index 15 */
   ATL_crm2am_an_4x2   /* index 16 */
};

static const cm2am_t ATL_AMM_AC2BLK_an[17] =
{
   ATL_ccm2am_an_4x4C,  /* index 0 */
   ATL_ccm2am_an_4x4C,  /* index 1 */
   ATL_ccm2am_an_12C,  /* index 2 */
   ATL_ccm2am_an_4x4C,  /* index 3 */
   ATL_ccm2am_an_32C,  /* index 4 */
   ATL_ccm2am_an_32C,  /* index 5 */
   ATL_ccm2am_an_4x4C,  /* index 6 */
   ATL_ccm2am_an_4x4C,  /* index 7 */
   ATL_ccm2am_an_4x4C,  /* index 8 */
   ATL_ccm2am_an_4x4C,  /* index 9 */
   ATL_ccm2am_an_4x4C,  /* index 10 */
   ATL_ccm2am_an_4x4C,  /* index 11 */
   ATL_ccm2am_an_4x4C,  /* index 12 */
   ATL_ccm2am_an_4x4C,  /* index 13 */
   ATL_ccm2am_an_4x4C,  /* index 14 */
   ATL_ccm2am_an_4x4C,  /* index 15 */
   ATL_ccm2am_an_4x4C   /* index 16 */
};

static const cm2am_t ATL_AMM_AH2BLK_an[17] =
{
   ATL_crm2am_an_4x4C,  /* index 0 */
   ATL_crm2am_an_4x4C,  /* index 1 */
   ATL_crm2am_an_12C,  /* index 2 */
   ATL_crm2am_an_4x4C,  /* index 3 */
   ATL_crm2am_an_32C,  /* index 4 */
   ATL_crm2am_an_32C,  /* index 5 */
   ATL_crm2am_an_4x4C,  /* index 6 */
   ATL_crm2am_an_4x4C,  /* index 7 */
   ATL_crm2am_an_4x4C,  /* index 8 */
   ATL_crm2am_an_4x4C,  /* index 9 */
   ATL_crm2am_an_4x4C,  /* index 10 */
   ATL_crm2am_an_4x4C,  /* index 11 */
   ATL_crm2am_an_4x4C,  /* index 12 */
   ATL_crm2am_an_4x4C,  /* index 13 */
   ATL_crm2am_an_4x4C,  /* index 14 */
   ATL_crm2am_an_4x4C,  /* index 15 */
   ATL_crm2am_an_4x4C   /* index 16 */
};

static const cm2am_t ATL_AMM_BC2BLK_an[17] =
{
   ATL_ccm2am_an_4x2C,  /* index 0 */
   ATL_ccm2am_an_4x2C,  /* index 1 */
   ATL_ccm2am_an_3C,  /* index 2 */
   ATL_ccm2am_an_4x2C,  /* index 3 */
   ATL_ccm2am_an_1C,  /* index 4 */
   ATL_ccm2am_an_1C,  /* index 5 */
   ATL_ccm2am_an_4x2C,  /* index 6 */
   ATL_ccm2am_an_4x2C,  /* index 7 */
   ATL_ccm2am_an_4x2C,  /* index 8 */
   ATL_ccm2am_an_4x2C,  /* index 9 */
   ATL_ccm2am_an_4x2C,  /* index 10 */
   ATL_ccm2am_an_4x2C,  /* index 11 */
   ATL_ccm2am_an_4x2C,  /* index 12 */
   ATL_ccm2am_an_4x2C,  /* index 13 */
   ATL_ccm2am_an_4x2C,  /* index 14 */
   ATL_ccm2am_an_4x2C,  /* index 15 */
   ATL_ccm2am_an_4x2C   /* index 16 */
};

static const cm2am_t ATL_AMM_BH2BLK_an[17] =
{
   ATL_crm2am_an_4x2C,  /* index 0 */
   ATL_crm2am_an_4x2C,  /* index 1 */
   ATL_crm2am_an_3C,  /* index 2 */
   ATL_crm2am_an_4x2C,  /* index 3 */
   ATL_crm2am_an_1C,  /* index 4 */
   ATL_crm2am_an_1C,  /* index 5 */
   ATL_crm2am_an_4x2C,  /* index 6 */
   ATL_crm2am_an_4x2C,  /* index 7 */
   ATL_crm2am_an_4x2C,  /* index 8 */
   ATL_crm2am_an_4x2C,  /* index 9 */
   ATL_crm2am_an_4x2C,  /* index 10 */
   ATL_crm2am_an_4x2C,  /* index 11 */
   ATL_crm2am_an_4x2C,  /* index 12 */
   ATL_crm2am_an_4x2C,  /* index 13 */
   ATL_crm2am_an_4x2C,  /* index 14 */
   ATL_crm2am_an_4x2C,  /* index 15 */
   ATL_crm2am_an_4x2C   /* index 16 */
};


#endif  /* end include file guard */

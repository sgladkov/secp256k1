#ifndef _SECP256K1_FIELD_GMP_
#define _SECP256K1_FIELD_GMP_

#include <gmp.h>

#define FIELD_LIMBS ((256 + GMP_NUMB_BITS - 1) / GMP_NUMB_BITS)

typedef struct {
    mp_limb_t n[FIELD_LIMBS+1];
} secp256k1_fe_t;

#endif

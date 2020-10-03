#pragma once
#include "quantum.h"

#define LAYOUT( \
  k00, k01, k02, k03, k04, k05, k06, \
  k10, k11, k12, k13, k14, k15,      \
  k20, k21, k22, k23, k24, k25       \
) \
{ \
  { k00, k01, k02, k03, k04, k05, k06 }, \
  { k10, k11, k12, k13, k14, k15, KC_NO }, \
  { k20, k21, k22, k23, k24, k25, KC_NO }, \
}


#include "xmath/xmath.h"

int main()
{
  float_s32_t a = {4564, -3};
  float_s32_t b = float_s32_exp(a);
  (void)b;
  // Just reference a few symbols to make sure that they can be linked in
  /*asm volatile("ldap r11, vect_s32_add" ::: "r11");
  asm volatile("ldap r11, vect_complex_s32_conj_mul" ::: "r11");
  asm volatile("ldap r11, vect_f32_dot" ::: "r11");
  asm volatile("ldap r11, vect_s16_headroom" ::: "r11");
  asm volatile("ldap r11, bfp_fft_forward_mono" ::: "r11");
  asm volatile("ldap r11, fft_dif_inverse" ::: "r11");
  asm volatile("ldap r11, q24_logistic_fast" ::: "r11");
  asm volatile("ldap r11, float_s32_abs" ::: "r11");
  asm volatile("ldap r11, filter_biquad_s32" ::: "r11");
  asm volatile("ldap r11, dct32_forward" ::: "r11");*/

  return 0;
}

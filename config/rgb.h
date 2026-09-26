#pragma once

#include <dt-bindings/zmk/rgb.h>

// Standard ZMK RGB effects; retain no-op bindings for builds without RGB.
#if defined(CONFIG_ZMK_RGB_UNDERGLOW) && CONFIG_ZMK_RGB_UNDERGLOW
#define LED_NEXT &rgb_ug RGB_EFF
#define LED_UP   &rgb_ug RGB_BRI
#define LED_DOWN &rgb_ug RGB_BRD
#define LED_TOG  &rgb_ug RGB_TOG
#else
#define LED_NEXT &none
#define LED_UP   &none
#define LED_DOWN &none
#define LED_TOG  &none
#endif

// Original QMK configuration: 21 key LEDs + 6 underglow LEDs per half.
#if defined(CONFIG_ZMK_RGB_UNDERGLOW) && CONFIG_ZMK_RGB_UNDERGLOW
&led_strip {
    chain-length = <27>;
};
#endif

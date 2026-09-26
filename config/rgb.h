#pragma once

#include <dt-bindings/zmk/rgb.h>

// RGB is enabled in corne.conf. Devicetree is processed before Kconfig,
// so do not condition these definitions on CONFIG_* symbols.
#define LED_NEXT &rgb_ug RGB_EFF
#define LED_UP   &rgb_ug RGB_BRI
#define LED_DOWN &rgb_ug RGB_BRD
#define LED_TOG  &rgb_ug RGB_TOG

// Original QMK configuration: 21 key LEDs + 6 underglow LEDs per half.
&led_strip {
    chain-length = <27>;
};

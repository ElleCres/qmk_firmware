#pragma once

/* The way how "handedness" is decided (which half is which),
see https://docs.qmk.fm/#/feature_split_keyboard?id=setting-handedness
for more options.
*/

#define MASTER_LEFT
// #define MASTER_RIGHT
// #define EE_HANDS

#define LAYER_STATE_8bit

#define TAPPING_TOGGLE 2
#undef TAPPING_TERM
#define TAPPING_TERM 200
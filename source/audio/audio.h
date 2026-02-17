#ifndef __AUDIO_H
#define __AUDIO_H

#ifndef AUDIO_QUALITY
#define AUDIO_QUALITY 0
#endif

#if AUDIO_QUALITY == 0
#include "numbers_minimum.h"
#include "stations_minimum.h"

// #elif AUDIO_QUALITY == 1
// #include "numbers_low.h"
// #include "stations_low.h"

// #elif AUDIO_QUALITY == 2
// #include "numbers_medium.h"
// #include "stations_medium.h"

// #elif AUDIO_QUALITY == 3
// #include "numbers_high.h"
// #include "stations_high.h"

// #else
// #include "numbers_extreme.h"
// #include "stations_extreme.h"

#endif
#endif
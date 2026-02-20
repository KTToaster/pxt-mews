#ifndef __AUDIO_H
#define __AUDIO_H

namespace minimum_audio{
  #include "numbers_minimum.h"
  #include "stations_minimum.h"
}

namespace low_audio{
  #include "numbers_low.h"
  #include "stations_low.h"
}
namespace medium_audio{
  #include "numbers_medium.h"
  #include "stations_medium.h"
}
namespace high_audio{
  #include "numbers_high.h"
  #include "stations_high.h"
}
namespace extreme_audio{
  #include "numbers_extreme.h"
  #include "stations_extreme.h"
}

static uint8_t quality=0;

// Audio Quality Shims
// Must be literal or the compiler will load every audio file
//%
void setAudioQuality_min(){ 
  quality=1;
}
//%
void setAudioQuality_low(){ 
  quality=2;
}
//%
void setAudioQuality_med(){ 
  quality=3;
}
//%
void setAudioQuality_high(){ 
  quality=4;
}
//%
void setAudioQuality_extreme(){ 
  quality=5;
}


#endif
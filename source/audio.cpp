#include "audio.h"

namespace audio{
  //%
  void add_audio(const char* name, uint8_t* data, int size, int sample_rate){
    Audio_Data audioData;
    audioData.data = data;
    audioData.size = size;
    audioData.sample_rate = sample_rate;

    data_map[name] = audioData;
  }
}
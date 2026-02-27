#include "audio.h"
#include "pxt.h"

namespace audio{
  //%
  void add_audio(const char* name, uint8_t* data, int data_len, int sample_rate){
    uBit.display.scroll(ManagedString(name)); // temporary debug
    Audio_Data audioData;
    audioData.data = data;
    audioData.size = data_len;
    audioData.sample_rate = sample_rate;
    data_map[std::string(name)] = audioData;
  }
}
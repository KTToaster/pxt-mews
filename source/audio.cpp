#include "audio.h"
#include "pxt.h"

namespace audio{
  std::map<std::string, Audio_Data> data_map;  // actual definition lives here

  //%
  void add_audio(String name, Buffer data, int data_len, int sample_rate){
    uBit.display.scroll(ManagedString(name->getUTF8Data())); // temporary debug
    Audio_Data audioData;
    audioData.data = data->data;
    audioData.size = data_len;
    audioData.sample_rate = sample_rate;
    data_map[std::string(name->getUTF8Data())] = audioData;
  }
}
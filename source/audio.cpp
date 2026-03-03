#include "audio.h"
#include "pxt.h"

namespace audio{
  std::map<std::string, Audio_Data> data_map; // Audio Data

  //%
  void add_audio(String name, Buffer data, int data_len, int sample_rate){
    Audio_Data audioData;

    audioData.data = (uint8_t*) malloc(data_len); // Prevents memory issues. 
    memcpy(audioData.data, data->data, data_len);

    audioData.size = data_len;
    audioData.sample_rate = sample_rate;

    data_map[std::string(name->getUTF8Data())] = audioData;
  }
}
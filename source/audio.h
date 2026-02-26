// AUTO-GENERATED. DO NOT TOUCH. //
// SAMPLE CODE: //
// PRAGMA ONCE //
#ifndef AUDIO_H
#define AUDIO_H

// IMPORTS //
#include "pxt.h"
#include <map>

// STRUCTS //
// Struct to hold all the important audio data.
struct Audio_Data{
  uint8_t* data;
  size_t size;
  int sample_rate;
};

// CONSTANTS //
// Data
namespace audio{
  static std::map<const char*, Audio_Data> data_map;
  
  //%
  void add_audio(const char* name, uint8_t* data, int size, int sample_rate) {
    Audio_Data audioData;
    audioData.data = data;
    audioData.size = size;
    audioData.sample_rate = sample_rate;

    data_map[name] = audioData;
  }
}

#endif
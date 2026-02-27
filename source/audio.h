// AUTO-GENERATED. DO NOT TOUCH. //
// SAMPLE CODE: //
// PRAGMA ONCE //
#ifndef AUDIO_H
#define AUDIO_H

// IMPORTS //
#include "pxt.h"
#include <map>
#include <string>

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
  static std::map<std::string, Audio_Data> data_map;  //

  /**
   * Adds a word to the list of words that can be spoken by the text-to-speech system, accessed through a typescript shim.
   * @param name The word being said by the text-to-speech system.
   * @param data The IMA ADPCM encoded audio data of that maps to the word. 
   * @param data_len MISSING PARAM CAUSING COMPILE ERRORS ADDED.
   * @param sample_rate The sample rate of the audio being played.
   */
  void add_audio(const char* name, uint8_t* data, int data_len, int sample_rate);
}

#endif
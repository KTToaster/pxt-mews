#include "pxt.h"
#include "decompressor.h"

// FUNCTION DEFINITIONS //
uint8_t* decompress(const uint8_t* data, size_t data_len, size_t* out_len){
  int predictor = 0;
  int index = 0;      
  int step = step_table[index];

  size_t pcm_len = data_len * 2;
  uint8_t* pcm = (uint8_t*)malloc(pcm_len);

  size_t pcm_pos = 0;

  for (int i = 0; i < data_len; i++) {
    uint8_t byte = data[i];

    for(int nibble = 0;nibble < 2;nibble++){
      uint8_t code = (nibble == 0) ? (byte & 0x0F) : (byte >> 4);

      int diff = step >> 3;
      if (code & 1) diff += step >> 2;
      if (code & 2) diff += step >> 1;
      if (code & 4) diff += step;
      if (code & 8) diff = -diff;

      predictor += diff;

      // Clamp to 16-bit range
      if (predictor > 32767) predictor = 32767;
      if (predictor < -32768) predictor = -32768;

      // Update index
      index += index_table[code];
      if (index < 0) index = 0;
      if (index > 88) index = 88;

      step = step_table[index];

      // Convert to u8 PCM 0–255
      int pcm_val = (predictor + 32768) >> 8; 
      pcm[pcm_pos++] = (uint8_t)pcm_val;
    }
  }

  *out_len = pcm_len;
  return pcm;
}
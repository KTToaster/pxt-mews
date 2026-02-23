#include "pxt.h"
#include "MicroBit.h"
#include "utils/decompressor.h"
#include "audio.h"
#include <string>
using namespace pxt;

void init_timer(int sample_rate);
void init_pwm();
void play_wav(uint8_t* audio_data, size_t out_size);
void play_sample(uint16_t sample);

namespace tts{
  //%
  void announceWord(ManagedString speak_text, ManagedString display_text){
    #if MICROBIT_CODAL
    Audio_Data audio_obj = audio::data_map[speak_text.toCharArray()];
    size_t out_size = 0;
    uint8_t* audio_data = decompress(audio_obj.data, audio_obj.size, &out_size); // U8 PCM Wav Data

    init_timer(audio_obj.sample_rate);
    init_pwm(); // Initialises PWM
    uBit.display.scroll(display_text);

    // TODO: async.
    play_wav(audio_data, out_size);
    
    free(audio_data);
    #else
    uBit.display.scroll(display_text);
    #endif
  }
}

#if MICROBIT_CODAL
void play_wav(uint8_t* audio_data, size_t out_size){
  for(unsigned int i=0; i<out_size/sizeof(uint8_t); i++){
    NRF_TIMER0->TASKS_CLEAR=(TIMER_TASKS_CLEAR_TASKS_CLEAR_Trigger<<TIMER_TASKS_CLEAR_TASKS_CLEAR_Pos);                         // Resets the timer
    NRF_TIMER0->EVENTS_COMPARE[0]=(TIMER_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated<<TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos);  // Resets the comparison check

    // Play Sample (Not Functioning Correctly)
    play_sample((uint16_t)audio_data[i]*2);
    
    // Wait for timer to finish
    while(NRF_TIMER0->EVENTS_COMPARE[0] == (TIMER_EVENTS_COMPARE_EVENTS_COMPARE_NotGenerated << TIMER_EVENTS_COMPARE_EVENTS_COMPARE_Pos));
  }
  NRF_TIMER0->TASKS_STOP = (TIMER_TASKS_STOP_TASKS_STOP_Trigger<<TIMER_TASKS_STOP_TASKS_STOP_Pos);                              // Stops the timer
  NRF_PWM0->ENABLE = (PWM_ENABLE_ENABLE_Disabled << PWM_ENABLE_ENABLE_Pos);                                                     // Disables the timer    
}


void play_sample(uint16_t sample){
  volatile uint16_t sequence[1] = {(sample * NRF_PWM0->COUNTERTOP) / 255};                                            // Defines a sequence

  NRF_PWM0->SEQ[0].PTR = ((uint32_t)&sequence << PWM_SEQ_PTR_PTR_Pos);                                                // Finds the start of the sequence 
  NRF_PWM0->SEQ[0].CNT = (1 << PWM_SEQ_CNT_CNT_Pos);                                                                  // Defines the size of the sequence as 1 
  NRF_PWM0->TASKS_SEQSTART[0] = (PWM_TASKS_SEQSTART_TASKS_SEQSTART_Trigger << PWM_TASKS_SEQSTART_TASKS_SEQSTART_Pos); // Enables the Sequence
}

void init_timer(int sample_rate){
  // Timer Initialisation
  NRF_TIMER0->PRESCALER = (4UL << TIMER_PRESCALER_PRESCALER_Pos);                                         // Sets the prescaler to divide the clock by 4
  NRF_TIMER0->BITMODE = (TIMER_BITMODE_BITMODE_32Bit << TIMER_BITMODE_BITMODE_Pos);                       // Sets the bitmode to 32bits

  NRF_TIMER0->CC[0] = 1000000/sample_rate;                                                                // Sets how long to wait for before returning True
  NRF_TIMER0->TASKS_START = (TIMER_TASKS_START_TASKS_START_Trigger << TIMER_TASKS_START_TASKS_START_Pos); // Starts the timer
}

void init_pwm(){
  NRF_PWM0->PSEL.OUT[0] = (MICROBIT_PIN_SPEAKER << PWM_PSEL_OUT_PIN_Pos) |                // Maps the first pin to the speaker
                          (PWM_PSEL_OUT_CONNECT_Connected << PWM_PSEL_OUT_CONNECT_Pos);   // Connects the pin
      
  NRF_PWM0->ENABLE = (PWM_ENABLE_ENABLE_Enabled << PWM_ENABLE_ENABLE_Pos);                // Enables PWM

  NRF_PWM0->DECODER = (PWM_DECODER_LOAD_Common << PWM_DECODER_LOAD_Pos);                  // Specifies the Common Decoder
  NRF_PWM0->MODE = (PWM_MODE_UPDOWN_Up << PWM_MODE_UPDOWN_Pos);                           // Specifies the mode to be up-only
  
  NRF_PWM0->PRESCALER = (PWM_PRESCALER_PRESCALER_DIV_1 << PWM_PRESCALER_PRESCALER_Pos);   // Specifies the prescaler to divide the clock by 0
  NRF_PWM0->COUNTERTOP = 1020;

  NRF_PWM0->SEQ[0].REFRESH  = (0 << PWM_SEQ_REFRESH_CNT_Pos);                             // Disables Refreshing
  NRF_PWM0->SEQ[0].ENDDELAY = (0 << PWM_SEQ_ENDDELAY_CNT_Pos);                            // Disables End Delay
  NRF_PWM0->LOOP = (PWM_LOOP_CNT_Disabled << PWM_LOOP_CNT_Pos);                           // Disables Looping
}
#endif

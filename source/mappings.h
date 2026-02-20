// PRECOMPILER //
#ifndef __MAPPINGS_H
#define __MAPPINGS_H
#include "audio/audio.h"
#include "pxt.h"
using namespace pxt;

// CONSTANTS //
struct name_data_mapping{
  const char* name;
  const uint8_t* data;
  const size_t size;
  const int sample_rate;
};
struct num_data_mapping{
  const uint8_t number;
  const uint8_t* data;
  const size_t size;
  const int sample_rate;
};

namespace audio{
  if(quality == 1){
    static const name_data_mapping STATIONS[] = {
      {"PON", minimum_audio::PON_data, minimum_audio::PON_size, minimum_audio::PON_sr},
      {"PPL", minimum_audio::PPL_data, minimum_audio::PPL_size, minimum_audio::PPL_sr},
      {"PPD", minimum_audio::PPD_data, minimum_audio::PPD_size, minimum_audio::PPD_sr},
      {"Poole_Harbour", minimum_audio::Poole_Harbour_data, minimum_audio::Poole_Harbour_size, minimum_audio::Poole_Harbour_sr},
      {"OXT", minimum_audio::OXT_data, minimum_audio::OXT_size, minimum_audio::OXT_sr},
      {"PRH", minimum_audio::PRH_data, minimum_audio::PRH_size, minimum_audio::PRH_sr},
      {"OXS", minimum_audio::OXS_data, minimum_audio::OXS_size, minimum_audio::OXS_sr},
      {"Portsmouth_and_Southsea_Hoverport", minimum_audio::Portsmouth_and_Southsea_Hoverport_data, minimum_audio::Portsmouth_and_Southsea_Hoverport_size, minimum_audio::Portsmouth_and_Southsea_Hoverport_sr},
      {"Liverpool_Street", minimum_audio::Liverpool_Street_data, minimum_audio::Liverpool_Street_size, minimum_audio::Liverpool_Street_sr},
      {"LIV", minimum_audio::LIV_data, minimum_audio::LIV_size, minimum_audio::LIV_sr},
      {"OXN", minimum_audio::OXN_data, minimum_audio::OXN_size, minimum_audio::OXN_sr},
      {"Oxted_Bay", minimum_audio::Oxted_Bay_data, minimum_audio::Oxted_Bay_size, minimum_audio::Oxted_Bay_sr},
      {"POR", minimum_audio::POR_data, minimum_audio::POR_size, minimum_audio::POR_sr},
      {"LAM", minimum_audio::LAM_data, minimum_audio::LAM_size, minimum_audio::LAM_sr},
      {"Liverpool", minimum_audio::Liverpool_data, minimum_audio::Liverpool_size, minimum_audio::Liverpool_sr},
      {"POO", minimum_audio::POO_data, minimum_audio::POO_size, minimum_audio::POO_sr},
      {"LAN", minimum_audio::LAN_data, minimum_audio::LAN_size, minimum_audio::LAN_sr},
      {"Lake_District", minimum_audio::Lake_District_data, minimum_audio::Lake_District_size, minimum_audio::Lake_District_sr},
      {"PPL__New_Inn", minimum_audio::PPL__New_Inn_data, minimum_audio::PPL__New_Inn_size, minimum_audio::PPL__New_Inn_sr},
      {"Liverpool_South", minimum_audio::Liverpool_South_data, minimum_audio::Liverpool_South_size, minimum_audio::Liverpool_South_sr},
      {"POT", minimum_audio::POT_data, minimum_audio::POT_size, minimum_audio::POT_sr},
      {"PPK", minimum_audio::PPK_data, minimum_audio::PPK_size, minimum_audio::PPK_sr},
      {"PRB", minimum_audio::PRB_data, minimum_audio::PRB_size, minimum_audio::PRB_sr},
      {"POP", minimum_audio::POP_data, minimum_audio::POP_size, minimum_audio::POP_sr},
      {"PRE", minimum_audio::PRE_data, minimum_audio::PRE_size, minimum_audio::PRE_sr},
      {"PRA", minimum_audio::PRA_data, minimum_audio::PRA_size, minimum_audio::PRA_sr},
      {"OXF", minimum_audio::OXF_data, minimum_audio::OXF_size, minimum_audio::OXF_sr}
    };
    static const num_data_mapping NUMBERS[] = {
      {0, minimum_audio::O_data, minimum_audio::O_size, minimum_audio::O_sr},
      {1, minimum_audio::_1_data, minimum_audio::_1_size, minimum_audio::_1_sr},
      {2, minimum_audio::_2_data, minimum_audio::_2_size, minimum_audio::_2_sr},
      {3, minimum_audio::_3_data, minimum_audio::_3_size, minimum_audio::_3_sr},
      {4, minimum_audio::_4_data, minimum_audio::_4_size, minimum_audio::_4_sr},
      {5, minimum_audio::_5_data, minimum_audio::_5_size, minimum_audio::_5_sr},
      {6, minimum_audio::_6_data, minimum_audio::_6_size, minimum_audio::_6_sr},
      {7, minimum_audio::_7_data, minimum_audio::_7_size, minimum_audio::_7_sr},
      {8, minimum_audio::_8_data, minimum_audio::_8_size, minimum_audio::_8_sr},
      {9, minimum_audio::_9_data, minimum_audio::_9_size, minimum_audio::_9_sr},
      {10, minimum_audio::_10_data, minimum_audio::_10_size, minimum_audio::_10_sr},
      {11, minimum_audio::_11_data, minimum_audio::_11_size, minimum_audio::_11_sr},
      {12, minimum_audio::_12_data, minimum_audio::_12_size, minimum_audio::_12_sr},
      {13, minimum_audio::_13_data, minimum_audio::_13_size, minimum_audio::_13_sr},
      {14, minimum_audio::_14_data, minimum_audio::_14_size, minimum_audio::_14_sr},
      {15, minimum_audio::_15_data, minimum_audio::_15_size, minimum_audio::_15_sr},
      {16, minimum_audio::_16_data, minimum_audio::_16_size, minimum_audio::_16_sr},
      {17, minimum_audio::_17_data, minimum_audio::_17_size, minimum_audio::_17_sr},
      {18, minimum_audio::_18_data, minimum_audio::_18_size, minimum_audio::_18_sr},
      {19, minimum_audio::_19_data, minimum_audio::_19_size, minimum_audio::_19_sr},
      {20, minimum_audio::_20_data, minimum_audio::_20_size, minimum_audio::_20_sr},
      {30, minimum_audio::_30_data, minimum_audio::_30_size, minimum_audio::_30_sr},
      {40, minimum_audio::_40_data, minimum_audio::_40_size, minimum_audio::_40_sr},
      {50, minimum_audio::_50_data, minimum_audio::_50_size, minimum_audio::_50_sr},
    };
  
    static const name_data_mapping NUMBERS_SPECIAL[] = {
      {"00", minimum_audio::_00__hundredhours_data, minimum_audio::_00__hundredhours_size, minimum_audio::_00__hundredhours_sr}
    };
  }
  if(quality == 2){
    static const name_data_mapping STATIONS[] = {
      {"PON", low_audio::PON_data, low_audio::, Plow_audio::ON_sr},
      {"PPL", low_audio::PPL_data, low_audio::PPL_size, low_audio::PPL_sr},
      {"PPD", low_audio::PPD_data, low_audio::PPD_size, low_audio::PPD_sr},
      {"Poole_Harbour", low_audio::Poole_Harbour_data, low_audio::Poole_Harbour_size, low_audio::Poole_Harbour_sr},
      {"OXT", low_audio::OXT_data, low_audio::OXT_size, low_audio::OXT_sr},
      {"PRH", low_audio::PRH_data, low_audio::PRH_size, low_audio::PRH_sr},
      {"OXS", low_audio::OXS_data, low_audio::OXS_size, low_audio::OXS_sr},
      {"Portsmouth_and_Southsea_Hoverport", low_audio::Portsmouth_and_Southsea_Hoverport_data, low_audio::Portsmouth_and_Southsea_Hoverport_size, low_audio::Portsmouth_and_Southsea_Hoverport_sr},
      {"Liverpool_Street", low_audio::Liverpool_Street_data, low_audio::Liverpool_Street_size, low_audio::Liverpool_Street_sr},
      {"LIV", low_audio::LIV_data, low_audio::LIV_size, low_audio::LIV_sr},
      {"OXN", low_audio::OXN_data, low_audio::OXN_size, low_audio::OXN_sr},
      {"Oxted_Bay", low_audio::Oxted_Bay_data, low_audio::Oxted_Bay_size, low_audio::Oxted_Bay_sr},
      {"POR", low_audio::POR_data, low_audio::POR_size, low_audio::POR_sr},
      {"LAM", low_audio::LAM_data, low_audio::LAM_size, low_audio::LAM_sr},
      {"Liverpool", low_audio::Liverpool_data, low_audio::Liverpool_size, low_audio::Liverpool_sr},
      {"POO", low_audio::POO_data, low_audio::POO_size, low_audio::POO_sr},
      {"LAN", low_audio::LAN_data, low_audio::LAN_size, low_audio::LAN_sr},
      {"Lake_District", low_audio::Lake_District_data, low_audio::Lake_District_size, low_audio::Lake_District_sr},
      {"PPL__New_Inn", low_audio::PPL__New_Inn_data, low_audio::PPL__New_Inn_size, low_audio::PPL__New_Inn_sr},
      {"Liverpool_South", low_audio::Liverpool_South_data, low_audio::Liverpool_South_size, low_audio::Liverpool_South_sr},
      {"POT", low_audio::POT_data, low_audio::POT_size, low_audio::POT_sr},
      {"PPK", low_audio::PPK_data, low_audio::PPK_size, low_audio::PPK_sr},
      {"PRB", low_audio::PRB_data, low_audio::PRB_size, low_audio::PRB_sr},
      {"POP", low_audio::POP_data, low_audio::POP_size, low_audio::POP_sr},
      {"PRE", low_audio::PRE_data, low_audio::PRE_size, low_audio::PRE_sr},
      {"PRA", low_audio::PRA_data, low_audio::PRA_size, low_audio::PRA_sr},
      {"OXF", low_audio::OXF_data, low_audio::OXF_size, low_audio::OXF_sr}
    };
    static const num_data_mapping NUMBERS[] = {
      {0, low_audio::O_data, low_audio::O_size, low_audio::O_sr},
      {1, low_audio::_1_data, low_audio::_1_size, low_audio::_1_sr},
      {2, low_audio::_2_data, low_audio::_2_size, low_audio::_2_sr},
      {3, low_audio::_3_data, low_audio::_3_size, low_audio::_3_sr},
      {4, low_audio::_4_data, low_audio::_4_size, low_audio::_4_sr},
      {5, low_audio::_5_data, low_audio::_5_size, low_audio::_5_sr},
      {6, low_audio::_6_data, low_audio::_6_size, low_audio::_6_sr},
      {7, low_audio::_7_data, low_audio::_7_size, low_audio::_7_sr},
      {8, low_audio::_8_data, low_audio::_8_size, low_audio::_8_sr},
      {9, low_audio::_9_data, low_audio::_9_size, low_audio::_9_sr},
      {10, low_audio::_10_data, low_audio::_10_size, low_audio::_10_sr},
      {11, low_audio::_11_data, low_audio::_11_size, low_audio::_11_sr},
      {12, low_audio::_12_data, low_audio::_12_size, low_audio::_12_sr},
      {13, low_audio::_13_data, low_audio::_13_size, low_audio::_13_sr},
      {14, low_audio::_14_data, low_audio::_14_size, low_audio::_14_sr},
      {15, low_audio::_15_data, low_audio::_15_size, low_audio::_15_sr},
      {16, low_audio::_16_data, low_audio::_16_size, low_audio::_16_sr},
      {17, low_audio::_17_data, low_audio::_17_size, low_audio::_17_sr},
      {18, low_audio::_18_data, low_audio::_18_size, low_audio::_18_sr},
      {19, low_audio::_19_data, low_audio::_19_size, low_audio::_19_sr},
      {20, low_audio::_20_data, low_audio::_20_size, low_audio::_20_sr},
      {30, low_audio::_30_data, low_audio::_30_size, low_audio::_30_sr},
      {40, low_audio::_40_data, low_audio::_40_size, low_audio::_40_sr},
      {50, low_audio::_50_data, low_audio::_50_size, low_audio::_50_sr},
    };

    static const name_data_mapping NUMBERS_SPECIAL[] = {
      {"00", low_audio::_00__hundredhours_size, low_audio::_00__hundredhours_size, low_audio::_00__hundredhours_sr}
    };
  }
  if(quality == 3){
    static const name_data_mapping STATIONS[] = {
      {"PON", medium_audio::PON_data, medium_audio::PON_size, medium_audio::PON_sr},
      {"PPL", medium_audio::PPL_data, medium_audio::PPL_size, medium_audio::PPL_sr},
      {"PPD", medium_audio::PPD_data, medium_audio::PPD_size, medium_audio::PPD_sr},
      {"Poole_Harbour", medium_audio::Poole_Harbour_data, medium_audio::Poole_Harbour_size, medium_audio::Poole_Harbour_sr},
      {"OXT", medium_audio::OXT_data, medium_audio::OXT_size, medium_audio::OXT_sr},
      {"PRH", medium_audio::PRH_data, medium_audio::PRH_size, medium_audio::PRH_sr},
      {"OXS", medium_audio::OXS_data, medium_audio::OXS_size, medium_audio::OXS_sr},
      {"Portsmouth_and_Southsea_Hoverport", medium_audio::Portsmouth_and_Southsea_Hoverport_data, medium_audio::Portsmouth_and_Southsea_Hoverport_size, medium_audio::Portsmouth_and_Southsea_Hoverport_sr},
      {"Liverpool_Street", medium_audio::Liverpool_Street_data, medium_audio::Liverpool_Street_size, medium_audio::Liverpool_Street_sr},
      {"LIV", medium_audio::LIV_data, medium_audio::LIV_size, medium_audio::LIV_sr},
      {"OXN", medium_audio::OXN_data, medium_audio::OXN_size, medium_audio::OXN_sr},
      {"Oxted_Bay", medium_audio::Oxted_Bay_data, medium_audio::Oxted_Bay_size, medium_audio::Oxted_Bay_sr},
      {"POR", medium_audio::POR_data, medium_audio::POR_size, medium_audio::POR_sr},
      {"LAM", medium_audio::LAM_data, medium_audio::LAM_size, medium_audio::LAM_sr},
      {"Liverpool", medium_audio::Liverpool_data, medium_audio::Liverpool_size, medium_audio::Liverpool_sr},
      {"POO", medium_audio::POO_data, medium_audio::POO_size, medium_audio::POO_sr},
      {"LAN", medium_audio::LAN_data, medium_audio::LAN_size, medium_audio::LAN_sr},
      {"Lake_District", medium_audio::Lake_District_data, medium_audio::Lake_District_size, medium_audio::Lake_District_sr},
      {"PPL__New_Inn", medium_audio::PPL__New_Inn_data, medium_audio::PPL__New_Inn_size, medium_audio::PPL__New_Inn_sr},
      {"Liverpool_South", medium_audio::Liverpool_South_data, medium_audio::Liverpool_South_size, medium_audio::Liverpool_South_sr},
      {"POT", medium_audio::POT_data, medium_audio::POT_size, medium_audio::POT_sr},
      {"PPK", medium_audio::PPK_data, medium_audio::PPK_size, medium_audio::PPK_sr},
      {"PRB", medium_audio::PRB_data, medium_audio::PRB_size, medium_audio::PRB_sr},
      {"POP", medium_audio::POP_data, medium_audio::POP_size, medium_audio::POP_sr},
      {"PRE", medium_audio::PRE_data, medium_audio::PRE_size, medium_audio::PRE_sr},
      {"PRA", medium_audio::PRA_data, medium_audio::PRA_size, medium_audio::PRA_sr},
      {"OXF", medium_audio::OXF_data, medium_audio::OXF_size, medium_audio::OXF_sr}
    };

    static const num_data_mapping NUMBERS[] = {
      {0, medium_audio::O_data, medium_audio::O_size, medium_audio::O_sr},
      {1, medium_audio::_1_data, medium_audio::_1_size, medium_audio::_1_sr},
      {2, medium_audio::_2_data, medium_audio::_2_size, medium_audio::_2_sr},
      {3, medium_audio::_3_data, medium_audio::_3_size, medium_audio::_3_sr},
      {4, medium_audio::_4_data, medium_audio::_4_size, medium_audio::_4_sr},
      {5, medium_audio::_5_data, medium_audio::_5_size, medium_audio::_5_sr},
      {6, medium_audio::_6_data, medium_audio::_6_size, medium_audio::_6_sr},
      {7, medium_audio::_7_data, medium_audio::_7_size, medium_audio::_7_sr},
      {8, medium_audio::_8_data, medium_audio::_8_size, medium_audio::_8_sr},
      {9, medium_audio::_9_data, medium_audio::_9_size, medium_audio::_9_sr},
      {10, medium_audio::_10_data, medium_audio::_10_size, medium_audio::_10_sr},
      {11, medium_audio::_11_data, medium_audio::_11_size, medium_audio::_11_sr},
      {12, medium_audio::_12_data, medium_audio::_12_size, medium_audio::_12_sr},
      {13, medium_audio::_13_data, medium_audio::_13_size, medium_audio::_13_sr},
      {14, medium_audio::_14_data, medium_audio::_14_size, medium_audio::_14_sr},
      {15, medium_audio::_15_data, medium_audio::_15_size, medium_audio::_15_sr},
      {16, medium_audio::_16_data, medium_audio::_16_size, medium_audio::_16_sr},
      {17, medium_audio::_17_data, medium_audio::_17_size, medium_audio::_17_sr},
      {18, medium_audio::_18_data, medium_audio::_18_size, medium_audio::_18_sr},
      {19, medium_audio::_19_data, medium_audio::_19_size, medium_audio::_19_sr},
      {20, medium_audio::_20_data, medium_audio::_20_size, medium_audio::_20_sr},
      {30, medium_audio::_30_data, medium_audio::_30_size, medium_audio::_30_sr},
      {40, medium_audio::_40_data, medium_audio::_40_size, medium_audio::_40_sr},
      {50, medium_audio::_50_data, medium_audio::_50_size, medium_audio::_50_sr},
    };
  
    static const name_data_mapping NUMBERS_SPECIAL[] = {
      {"00", _00__hundredhours_data, _00__hundredhours_size, _00__hundredhours_sr}
    };
  }
  if(quality == 4){
    static const name_data_mapping STATIONS[] = {
      {"PON", high_audio::PON_data, high_audio::PON_size, high_audio::PON_sr},
      {"PPL", high_audio::PPL_data, high_audio::PPL_size, high_audio::PPL_sr},
      {"PPD", high_audio::PPD_data, high_audio::PPD_size, high_audio::PPD_sr},
      {"Poole_Harbour", high_audio::Poole_Harbour_data, high_audio::Poole_Harbour_size, high_audio::Poole_Harbour_sr},
      {"OXT", high_audio::OXT_data, high_audio::OXT_size, high_audio::OXT_sr},
      {"PRH", high_audio::PRH_data, high_audio::PRH_size, high_audio::PRH_sr},
      {"OXS", high_audio::OXS_data, high_audio::OXS_size, high_audio::OXS_sr},
      {"Portsmouth_and_Southsea_Hoverport", high_audio::Portsmouth_and_Southsea_Hoverport_data, high_audio::Portsmouth_and_Southsea_Hoverport_size, high_audio::Portsmouth_and_Southsea_Hoverport_sr},
      {"Liverpool_Street", high_audio::Liverpool_Street_data, high_audio::Liverpool_Street_size, high_audio::Liverpool_Street_sr},
      {"LIV", high_audio::LIV_data, high_audio::LIV_size, high_audio::LIV_sr},
      {"OXN", high_audio::OXN_data, high_audio::OXN_size, high_audio::OXN_sr},
      {"Oxted_Bay", high_audio::Oxted_Bay_data, high_audio::Oxted_Bay_size, high_audio::Oxted_Bay_sr},
      {"POR", high_audio::POR_data, high_audio::POR_size, high_audio::POR_sr},
      {"LAM", high_audio::LAM_data, high_audio::LAM_size, high_audio::LAM_sr},
      {"Liverpool", high_audio::Liverpool_data, high_audio::Liverpool_size, high_audio::Liverpool_sr},
      {"POO", high_audio::POO_data, high_audio::POO_size, high_audio::POO_sr},
      {"LAN", high_audio::LAN_data, high_audio::LAN_size, high_audio::LAN_sr},
      {"Lake_District", high_audio::Lake_District_data, high_audio::Lake_District_size, high_audio::Lake_District_sr},
      {"PPL__New_Inn", high_audio::PPL__New_Inn_data, high_audio::PPL__New_Inn_size, high_audio::PPL__New_Inn_sr},
      {"Liverpool_South", high_audio::Liverpool_South_data, high_audio::Liverpool_South_size, high_audio::Liverpool_South_sr},
      {"POT", high_audio::POT_data, high_audio::POT_size, high_audio::POT_sr},
      {"PPK", high_audio::PPK_data, high_audio::PPK_size, high_audio::PPK_sr},
      {"PRB", high_audio::PRB_data, high_audio::PRB_size, high_audio::PRB_sr},
      {"POP", high_audio::POP_data, high_audio::POP_size, high_audio::POP_sr},
      {"PRE", high_audio::PRE_data, high_audio::PRE_size, high_audio::PRE_sr},
      {"PRA", high_audio::PRA_data, high_audio::PRA_size, high_audio::PRA_sr},
      {"OXF", high_audio::OXF_data, high_audio::OXF_size, high_audio::OXF_sr}
    };
    static const num_data_mapping NUMBERS[] = {
      {0, high_audio::O_data, high_audio::O_size, high_audio::O_sr},
      {1, high_audio::_1_data, high_audio::_1_size, high_audio::_1_sr},
      {2, high_audio::_2_data, high_audio::_2_size, high_audio::_2_sr},
      {3, high_audio::_3_data, high_audio::_3_size, high_audio::_3_sr},
      {4, high_audio::_4_data, high_audio::_4_size, high_audio::_4_sr},
      {5, high_audio::_5_data, high_audio::_5_size, high_audio::_5_sr},
      {6, high_audio::_6_data, high_audio::_6_size, high_audio::_6_sr},
      {7, high_audio::_7_data, high_audio::_7_size, high_audio::_7_sr},
      {8, high_audio::_8_data, high_audio::_8_size, high_audio::_8_sr},
      {9, high_audio::_9_data, high_audio::_9_size, high_audio::_9_sr},
      {10, high_audio::_10_data, high_audio::_10_size, high_audio::_10_sr},
      {11, high_audio::_11_data, high_audio::_11_size, high_audio::_11_sr},
      {12, high_audio::_12_data, high_audio::_12_size, high_audio::_12_sr},
      {13, high_audio::_13_data, high_audio::_13_size, high_audio::_13_sr},
      {14, high_audio::_14_data, high_audio::_14_size, high_audio::_14_sr},
      {15, high_audio::_15_data, high_audio::_15_size, high_audio::_15_sr},
      {16, high_audio::_16_data, high_audio::_16_size, high_audio::_16_sr},
      {17, high_audio::_17_data, high_audio::_17_size, high_audio::_17_sr},
      {18, high_audio::_18_data, high_audio::_18_size, high_audio::_18_sr},
      {19, high_audio::_19_data, high_audio::_19_size, high_audio::_19_sr},
      {20, high_audio::_20_data, high_audio::_20_size, high_audio::_20_sr},
      {30, high_audio::_30_data, high_audio::_30_size, high_audio::_30_sr},
      {40, high_audio::_40_data, high_audio::_40_size, high_audio::_40_sr},
      {50, high_audio::_50_data, high_audio::_50_size, high_audio::_50_sr},
    };
  
    static const name_data_mapping NUMBERS_SPECIAL[] = {
      {"00", high_audio::_00__hundredhours_data, high_audio::_00__hundredhours_size, high_audio_00__hundredhours_sr}
    };
  }
  if(quality == 5){
    static const name_data_mapping STATIONS[] = {
      {"PON", extreme_audio::PON_data, extreme_audio::PON_size, extreme_audio::PON_sr},
      {"PPL", extreme_audio::PPL_data, extreme_audio::PPL_size, extreme_audio::PPL_sr},
      {"PPD", extreme_audio::PPD_data, extreme_audio::PPD_size, extreme_audio::PPD_sr},
      {"Poole_Harbour", extreme_audio::Poole_Harbour_data, extreme_audio::Poole_Harbour_size, extreme_audio::Poole_Harbour_sr},
      {"OXT", extreme_audio::OXT_data, extreme_audio::OXT_size, extreme_audio::OXT_sr},
      {"PRH", extreme_audio::PRH_data, extreme_audio::PRH_size, extreme_audio::PRH_sr},
      {"OXS", extreme_audio::OXS_data, extreme_audio::OXS_size, extreme_audio::OXS_sr},
      {"Portsmouth_and_Southsea_Hoverport", extreme_audio::Portsmouth_and_Southsea_Hoverport_data, extreme_audio::Portsmouth_and_Southsea_Hoverport_size, extreme_audio::Portsmouth_and_Southsea_Hoverport_sr},
      {"Liverpool_Street", extreme_audio::Liverpool_Street_data, extreme_audio::Liverpool_Street_size, extreme_audio::Liverpool_Street_sr},
      {"LIV", extreme_audio::LIV_data, extreme_audio::LIV_size, extreme_audio::LIV_sr},
      {"OXN", extreme_audio::OXN_data, extreme_audio::OXN_size, extreme_audio::OXN_sr},
      {"Oxted_Bay", extreme_audio::Oxted_Bay_data, extreme_audio::Oxted_Bay_size, extreme_audio::Oxted_Bay_sr},
      {"POR", extreme_audio::POR_data, extreme_audio::POR_size, extreme_audio::POR_sr},
      {"LAM", extreme_audio::LAM_data, extreme_audio::LAM_size, extreme_audio::LAM_sr},
      {"Liverpool", extreme_audio::Liverpool_data, extreme_audio::Liverpool_size, extreme_audio::Liverpool_sr},
      {"POO", extreme_audio::POO_data, extreme_audio::POO_size, extreme_audio::POO_sr},
      {"LAN", extreme_audio::LAN_data, extreme_audio::LAN_size, extreme_audio::LAN_sr},
      {"Lake_District", extreme_audio::Lake_District_data, extreme_audio::Lake_District_size, extreme_audio::Lake_District_sr},
      {"PPL__New_Inn", extreme_audio::PPL__New_Inn_data, extreme_audio::PPL__New_Inn_size, extreme_audio::PPL__New_Inn_sr},
      {"Liverpool_South", extreme_audio::Liverpool_South_data, extreme_audio::Liverpool_South_size, extreme_audio::Liverpool_South_sr},
      {"POT", extreme_audio::POT_data, extreme_audio::POT_size, extreme_audio::POT_sr},
      {"PPK", extreme_audio::PPK_data, extreme_audio::PPK_size, extreme_audio::PPK_sr},
      {"PRB", extreme_audio::PRB_data, extreme_audio::PRB_size, extreme_audio::PRB_sr},
      {"POP", extreme_audio::POP_data, extreme_audio::POP_size, extreme_audio::POP_sr},
      {"PRE", extreme_audio::PRE_data, extreme_audio::PRE_size, extreme_audio::PRE_sr},
      {"PRA", extreme_audio::PRA_data, extreme_audio::PRA_size, extreme_audio::PRA_sr},
      {"OXF", extreme_audio::OXF_data, extreme_audio::OXF_size, extreme_audio::OXF_sr}
    };
    static const num_data_mapping NUMBERS[] = {
      {0, extreme_audio::O_data, extreme_audio::size, extreme_audio::O_sr},
      {1, extreme_audio::_1_data, extreme_audio::_1_size, extreme_audio::_1_sr},
      {2, extreme_audio::_2_data, extreme_audio::_2_size, extreme_audio::_2_sr},
      {3, extreme_audio::_3_data, extreme_audio::_3_size, extreme_audio::_3_sr},
      {4, extreme_audio::_4_data, extreme_audio::_4_size, extreme_audio::_4_sr},
      {5, extreme_audio::_5_data, extreme_audio::_5_size, extreme_audio::_5_sr},
      {6, extreme_audio::_6_data, extreme_audio::_6_size, extreme_audio::_6_sr},
      {7, extreme_audio::_7_data, extreme_audio::_7_size, extreme_audio::_7_sr},
      {8, extreme_audio::_8_data, extreme_audio::_8_size, extreme_audio::_8_sr},
      {9, extreme_audio::_9_data, extreme_audio::_9_size, extreme_audio::_9_sr},
      {10, extreme_audio::_10_data, extreme_audio::_10_size, extreme_audio::_10_sr},
      {11, extreme_audio::_11_data, extreme_audio::_11_size, extreme_audio::_11_sr},
      {12, extreme_audio::_12_data, extreme_audio::_12_size, extreme_audio::_12_sr},
      {13, extreme_audio::_13_data, extreme_audio::_13_size, extreme_audio::_13_sr},
      {14, extreme_audio::_14_data, extreme_audio::_14_size, extreme_audio::_14_sr},
      {15, extreme_audio::_15_data, extreme_audio::_15_size, extreme_audio::_15_sr},
      {16, extreme_audio::_16_data, extreme_audio::_16_size, extreme_audio::_16_sr},
      {17, extreme_audio::_17_data, extreme_audio::_17_size, extreme_audio::_17_sr},
      {18, extreme_audio::_18_data, extreme_audio::_18_size, extreme_audio::_18_sr},
      {19, extreme_audio::_19_data, extreme_audio::_19_size, extreme_audio::_19_sr},
      {20, extreme_audio::_20_data, extreme_audio::_20_size, extreme_audio::_20_sr},
      {30, extreme_audio::_30_data, extreme_audio::_30_size, extreme_audio::_30_sr},
      {40, extreme_audio::_40_data, extreme_audio::_40_size, extreme_audio::_40_sr},
      {50, extreme_audio::_50_data, extreme_audio::_50_size, extreme_audio::_50_sr},
    };
  
    static const name_data_mapping NUMBERS_SPECIAL[] = {
      {"00", extreme_audio::_00__hundredhours_data, extreme_audio::_00__hundredhours_size, extreme_audio::_00__hundredhours_sr}
    };
  }
}

#endif
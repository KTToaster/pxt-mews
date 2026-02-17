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
  static const name_data_mapping MAPPINGS[] = {
    {"PON", PON_data, PON_size, PON_sr},
    {"PPL", PPL_data, PPL_size, PPL_sr},
    {"PPD", PPD_data, PPD_size, PPD_sr},
    {"Poole_Harbour", Poole_Harbour_data, Poole_Harbour_size, Poole_Harbour_sr},
    {"OXT", OXT_data, OXT_size, OXT_sr},
    {"PRH", PRH_data, PRH_size, PRH_sr},
    {"OXS", OXS_data, OXS_size, OXS_sr},
    {"Portsmouth_and_Southsea_Hoverport", Portsmouth_and_Southsea_Hoverport_data, Portsmouth_and_Southsea_Hoverport_size, Portsmouth_and_Southsea_Hoverport_sr},
    {"Liverpool_Street", Liverpool_Street_data, Liverpool_Street_size, Liverpool_Street_sr},
    {"LIV", LIV_data, LIV_size, LIV_sr},
    {"OXN", OXN_data, OXN_size, OXN_sr},
    {"Oxted_Bay", Oxted_Bay_data, Oxted_Bay_size, Oxted_Bay_sr},
    {"POR", POR_data, POR_size, POR_sr},
    {"LAM", LAM_data, LAM_size, LAM_sr},
    {"Liverpool", Liverpool_data, Liverpool_size, Liverpool_sr},
    {"POO", POO_data, POO_size, POO_sr},
    {"LAN", LAN_data, LAN_size, LAN_sr},
    {"Lake_District", Lake_District_data, Lake_District_size, Lake_District_sr},
    {"PPL__New_Inn", PPL__New_Inn_data, PPL__New_Inn_size, PPL__New_Inn_sr},
    {"Liverpool_South", Liverpool_South_data, Liverpool_South_size, Liverpool_South_sr},
    {"POT", POT_data, POT_size, POT_sr},
    {"PPK", PPK_data, PPK_size, PPK_sr},
    {"PRB", PRB_data, PRB_size, PRB_sr},
    {"POP", POP_data, POP_size, POP_sr},
    {"PRE", PRE_data, PRE_size, PRE_sr},
    {"PRA", PRA_data, PRA_size, PRA_sr},
    {"OXF", OXF_data, OXF_size, OXF_sr}
  };
}
namespace times{
  static const num_data_mapping MAPPINGS[] = {
    {0, O_data, O_size, O_sr},
    {1, _1_data, _1_size, _1_sr},
    {2, _2_data, _2_size, _2_sr},
    {3, _3_data, _3_size, _3_sr},
    {4, _4_data, _4_size, _4_sr},
    {5, _5_data, _5_size, _5_sr},
    {6, _6_data, _6_size, _6_sr},
    {7, _7_data, _7_size, _7_sr},
    {8, _8_data, _8_size, _8_sr},
    {9, _9_data, _9_size, _9_sr},
    {10, _10_data, _10_size, _10_sr},
    {11, _11_data, _11_size, _11_sr},
    {12, _12_data, _12_size, _12_sr},
    {13, _13_data, _13_size, _13_sr},
    {14, _14_data, _14_size, _14_sr},
    {15, _15_data, _15_size, _15_sr},
    {16, _16_data, _16_size, _16_sr},
    {17, _17_data, _17_size, _17_sr},
    {18, _18_data, _18_size, _18_sr},
    {19, _19_data, _19_size, _19_sr},
    {20, _20_data, _20_size, _20_sr},
    {30, _30_data, _30_size, _30_sr},
    {40, _40_data, _40_size, _40_sr},
    {50, _50_data, _50_size, _50_sr},
  };

  static const name_data_mapping MAPPINGS_SPECIAL[] = {
    {"00", _00__hundredhours_data, _00__hundredhours_size, _00__hundredhours_sr}
  };
}

#endif
#ifndef PALDECODE_H
#define PALDECODE_H
#include "gfx_types.hpp"

namespace chrgfx
{
// hardware that uses RGB to form colors
// uses colordef to return colors
palette pal_decode_calc(const pal_def* paldef, const u8* data);

// hardware with a fixed system palette
// uses syspal to return colors
palette pal_decode_fixed(const pal_def* paldef, const u8* data);

// Tile Layer Pro
palette pal_decode_soft_tlp(const pal_def* paldef, const u8* data);

color get_color(const color_def* colordef, const u32 data);

}	// namespace chrgfx
#endif
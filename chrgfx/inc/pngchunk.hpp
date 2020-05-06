#ifndef PNGCHUNK_H
#define PNGCHUNK_H

#include "bank.hpp"
#include "gfxdef.hpp"
#include <png++/png.hpp>
#include <vector>

namespace chrgfx
{

bank pngchunk(png::image<png::index_pixel> &bitmap, chr_def const &chrdef);

} // namespace chrgfx

#endif
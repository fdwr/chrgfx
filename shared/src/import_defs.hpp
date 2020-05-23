#ifndef CHRGFX_EXEC_IMPORT_DEFS_H
#define CHRGFX_EXEC_IMPORT_DEFS_H

#include "chrgfx.hpp"
#include "shared.hpp"
#include <algorithm>
#include <array>
#include <bits/stdc++.h>
#include <cerrno>
#include <fstream>
#include <map>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>

#include "chrgfx.hpp"
#include "defblocks.hpp"
#include "shared.hpp"
#include "vd.hpp"

using namespace chrgfx;
using std::map;
using std::pair;
using std::string;
using std::tuple;
using std::vector;
using namespace vd;

std::tuple<map<string const, chrdef const>, map<string const, coldef const>,
					 map<string const, paldef const>, map<string const, gfxprofile const>>
load_gfxdefs(string const &def_file);

chrdef validate_chrdef_block(defblock const &def_block);
palette create_palette(std::string const &pal);

coldef validate_coldef_block(defblock const &def_block);

paldef validate_paldef_block(defblock const &def_block);

gfxprofile validate_profile_block(defblock const &def_block);

#endif
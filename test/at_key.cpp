//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
// Copyright (c) Lawrence Livermore National Security, LLC and other
// Camp Project Developers. See top-level LICENSE and COPYRIGHT
// files for dates and other details. No copyright assignment is required
// to contribute to Camp.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

#include <camp/camp.hpp>

using namespace camp;
using tl1 = list<list<int, num<0>>, list<char, num<1>>>;
CAMP_CHECK_TSAME((at_key<tl1, int>), (num<0>));
CAMP_CHECK_TSAME((at_key<tl1, char>), (num<1>));
CAMP_CHECK_TSAME((at_key<tl1, bool>), (nil));

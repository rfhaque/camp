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
CAMP_CHECK_TSAME((flatten<list<>>), (list<>));
CAMP_CHECK_TSAME((flatten<list<int>>), (list<int>));
CAMP_CHECK_TSAME((flatten<list<list<int>>>), (list<int>));
CAMP_CHECK_TSAME((flatten<list<list<list<int>>>>), (list<int>));
CAMP_CHECK_TSAME((flatten<list<float, list<int, double>, list<list<int>>>>),
                 (list<float, int, double, int>));

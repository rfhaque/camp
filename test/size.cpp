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
CAMP_CHECK_IEQ((size<list<int>>), (1));
CAMP_CHECK_IEQ((size<list<int, int>>), (2));
CAMP_CHECK_IEQ((size<list<int, int, int>>), (3));


CAMP_CHECK_IEQ((size<idx_seq<0>>), (1));
CAMP_CHECK_IEQ((size<idx_seq<0, 0>>), (2));
CAMP_CHECK_IEQ((size<idx_seq<0, 0, 0>>), (3));

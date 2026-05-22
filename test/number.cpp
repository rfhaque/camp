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
CAMP_CHECK_TSAME((make_idx_seq_t<3>), (idx_seq<0, 1, 2>));
CAMP_CHECK_TSAME((make_idx_seq_t<2>), (idx_seq<0, 1>));
CAMP_CHECK_TSAME((make_idx_seq_t<1>), (idx_seq<0>));
CAMP_CHECK_TSAME((make_idx_seq_t<0>), (idx_seq<>));

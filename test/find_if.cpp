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

template <typename Index, typename ForPol>
struct index_matches {
  using type = typename std::is_same<Index, typename ForPol::index>::type;
};

template <typename Index, typename T>
struct For {
  using index = Index;
  constexpr static std::size_t value = Index::value;
};

CAMP_CHECK_TSAME((find_if<std::is_pointer, list<float, double, int*>>), (int*));
CAMP_CHECK_TSAME((find_if<std::is_pointer, list<float, double>>), (nil));
CAMP_CHECK_TSAME((find_if_l<bind_front<std::is_same, For<num<1>, int>>,
                            list<For<num<0>, int>, For<num<1>, int>>>),
                 (For<num<1>, int>));
CAMP_CHECK_TSAME((find_if_l<bind_front<index_matches, num<1>>,
                            list<For<num<0>, int>, For<num<1>, int>>>),
                 (For<num<1>, int>));

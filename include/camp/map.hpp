//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//
// Copyright (c) Lawrence Livermore National Security, LLC and other
// Camp Project Developers. See top-level LICENSE and COPYRIGHT
// files for dates and other details. No copyright assignment is required
// to contribute to Camp.
//
// SPDX-License-Identifier: (BSD-3-Clause)
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~//

#ifndef CAMP_LIST_MAP_HPP
#define CAMP_LIST_MAP_HPP

#include "camp/helpers.hpp"  // declptr
#include "camp/list/list.hpp"
#include "camp/value.hpp"

namespace camp
{
// TODO: document

namespace detail
{
  template <typename Key, typename Val>
  Val lookup(list<Key, Val>*);

  template <typename>
  nil lookup(...);

  template <typename Seq, typename = nil>
  struct lookup_table;

  template <typename... Keys, typename... Values>
  struct lookup_table<list<list<Keys, Values>...>> : list<Keys, Values>... {
  };
}  // namespace detail

template <typename Seq, typename Key>
struct at_key_s {
  using type =
      decltype(detail::lookup<Key>(declptr<detail::lookup_table<Seq>>()));
};

/**
 * @brief Get value at Key from Map
 *
 * @tparam Map The map, or associative list, to index
 * @tparam Key The key to find
 */
template <typename Map, typename Key>
using at_key = typename at_key_s<Map, Key>::type;


}  // namespace camp

#endif /* CAMP_LIST_MAP_HPP */

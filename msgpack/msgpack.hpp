
#pragma once

/*******************************************************************************

 BEGIN_JUCE_MODULE_DECLARATION

  ID:               msgpack
  vendor:           msgpack
  version:          1.4.0
  name:             MessagePack
  description:      MessagePack is an extremely efficient object serialization library. It's like JSON, but very fast and small.
  website:          http://msgpack.org/
  license:          Boost Software License 1.0

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

#define MSGPACK_DISABLE_LEGACY_NIL
#define MSGPACK_DISABLE_LEGACY_CONVERT

#include "include/msgpack.hpp"

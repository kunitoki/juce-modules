
#pragma once

/*******************************************************************************

 BEGIN_JUCE_MODULE_DECLARATION

  ID:               benchmark
  vendor:           google
  version:          1.0.0
  name:             Google Benchmark
  description:      A microbenchmark support library.
  website:          https://github.com/google/benchmark
  license:          Apache License 2.0

 END_JUCE_MODULE_DECLARATION

*******************************************************************************/

//=============================================================================
/** Config: ENABLE_BENCHMARKS

    Check this is you want to enable the benchmark suite.
*/
#ifndef ENABLE_BENCHMARKS
  #define ENABLE_BENCHMARKS 0
#endif

//=============================================================================
/** Config: ENABLE_COLOR_CONSOLE

    Check this is you want to enable color console output.
*/
#ifndef ENABLE_COLOR_CONSOLE
  #define ENABLE_COLOR_CONSOLE 0
#endif

//=============================================================================
#if ENABLE_BENCHMARKS
  #include "include/benchmark/benchmark.h"
#endif

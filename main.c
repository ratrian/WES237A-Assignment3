#include "cycletime.h"

void myInitCounters(int do_reset, int enable_divider)
{
  init_counters(do_reset, enable_divider);
}

unsigned int myGetCyclecount()
{
  return get_cyclecount();
}
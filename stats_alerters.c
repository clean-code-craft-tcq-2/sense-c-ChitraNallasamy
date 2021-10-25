#include "stats.h"

void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats)
{
  if(computedStats.max > maxThreshold)
  {
    (*alerter_funcptr[0])();
    (*alerter_funcptr[1])();
  }
}

void emailAlerter(void)
{
   emailAlertCallCount = 1;
}

void ledAlerter(void)
{
   ledAlertCallCount = 1;
}

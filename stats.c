#include "stats.h"

Stats compute_statistics(const float* numberset, int setlength) {
    Stats s;

    int i,sum;
    
     s.max = numberset[0];
     s.min = numberset[0];
     sum = numberset[0];
     
    for (i=1; i<setlength; i++)
    {
      if (numberset[i]> s.max)
      {
          s.max=numberset[i];
      }
      else if (numberset[i]<s.min)
      {
         s.min=numberset[i];
      }
      else
      {
          /* do nothing */
      }    
      sum += numberset[i];
    }
    s.average =(float)sum/setlength;
    
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;


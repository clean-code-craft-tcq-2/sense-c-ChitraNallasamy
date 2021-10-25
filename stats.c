#include "stats.h"
#include "math.h"

Stats compute_statistics(const float* numberset, int setlength) {
    Stats s;
    
    if(setlength != 0)
    { 
        int i;
        float sum;
    
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
        s.average = sum/setlength;
    }
    else
    {
        s.max = NAN;
        s.min = NAN;
        s.average = NAN;
    }
    return s;
}

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

#include"msp430.h"
#include<math.h>
#include<stdlib.h>
#define  MAX_PTS 300
// Shannon McCormack, 221
void main(void)
{     // Give total size (in bytes) of these variables as declared
  float in_x[MAX_PTS], parab[MAX_PTS];     // 1200 bytes, 1200 bytes
  // At what address is beta stored?
  float beta;        // 4 bytes
  int i=0; //    
  WDTCTL = WDTPW + WDTHOLD;   // Stop watchdog timer    
  beta = 4.0;    
  while (i < MAX_PTS)       
  {         
    in_x[i] = (float)(i - MAX_PTS/2);   //    
    parab[i]= pow((in_x[i]-beta),2.0);  // 
    i++;                                // 
  } 
} 

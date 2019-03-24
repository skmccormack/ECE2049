#include"msp430.h"
#include<stdlib.h>
#define  MAX_PTS 300

// Shannon McCormack, 221
voidmain(void)
{     // Give total size (in bytes) of these variables as declared.
  int   in[MAX_PTS], parabola[MAX_PTS];  //300 bytes, 300 bytes
  // At what address is alfa stored? 
  int   alfa = 4;                 // 1 byte   
  int   half_max, i;           // 1 byte, 1 byte
  WDTCTL = WDTPW + WDTHOLD;   // Stop watchdog timer    
  half_max = MAX_PTS/2;       
  for (i = 0; i < MAX_PTS; i++)   // 
  {         
    in[i] = i – half_max;            //        
    parabola[i]= (in[i]-alfa)*(in[i]-alfa); //    
  } 
} 

#include"msp430.h"
#include<stdlib.h>
#define  MAX_PTS 300

// Shannon McCormack, 221
voidmain(void)
{     // Give total size (in bytes) of these variables as declared.
  // Declares 2 arrays of length 300 containing 8 bit elements
  int   in[MAX_PTS], parabola[MAX_PTS];  //300 bytes, 300 bytes
  // At what address is alfa stored?
  // Defines 8-bit variable equal to 4
  int   alfa = 4;                 // 1 byte
  // Declares two variables half_max and i
  int   half_max, i;           // 1 byte, 1 byte
  WDTCTL = WDTPW + WDTHOLD;   // Stop watchdog timer    
  // Defines half_max as equal to 300/2 = 150
  half_max = MAX_PTS/2;
  // Starts for loop, increments i by one after each loop, loops 300 times
  for (i = 0; i < MAX_PTS; i++)   // 
  {
    // Defines the array in of 300 numbers to numbers -150 to 149
    in[i] = i – half_max;            //
    // Defines the array parabola of 300 numbers, alpha (in terms of a graph) will shift these values 4 to the right of a squared graph
    parabola[i]= (in[i]-alfa)*(in[i]-alfa); //    
  } 
} 

/*
 * Switch.c
 *
 *  Created on: Nov 5, 2023
 *      Author:
 */
#include <ti/devices/msp/msp.h>
#include "../inc/LaunchPad.h"
// LaunchPad.h defines all the indices into the PINCM table
void Switch_Init(void){
    // write this
 
IOMUX->SECCFG.PINCM[PA27INDEX] = 0x00040081;//up
IOMUX->SECCFG.PINCM[PA26INDEX] = 0x00040081;//left
IOMUX->SECCFG.PINCM[PA25INDEX] = 0x00040081;//down
IOMUX->SECCFG.PINCM[PA24INDEX] = 0x00040081;//right


}
// return current state of switches
uint32_t Switch_In(void){
    // write this
  uint32_t in = GPIOA->DIN31_0&0xF000000;
  in=in>>24;
  return in; // replace this line
}

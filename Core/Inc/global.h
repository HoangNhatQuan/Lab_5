/*
 * global.h
 *
 *  Created on: Dec 22, 2022
 *      Author: Asus
 */

#ifndef INC_GLOBAL_H_
#define INC_GLOBAL_H_
//#define MAX_BUFFER_SIZE 30
extern int timer0_flag; //control led
extern int timer1_flag; //signal 5 secs time out
extern int ADC_value;
extern unsigned char command_index;
extern unsigned char command_done;
extern uint8_t buffer_flag;
extern uint8_t temp ;
#endif /* INC_GLOBAL_H_ */

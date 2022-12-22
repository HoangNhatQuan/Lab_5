/*
 * command_parser.h
 *
 *  Created on: Dec 22, 2022
 *      Author: Asus
 */

#ifndef INC_COMMAND_PARSER_H_
#define INC_COMMAND_PARSER_H_
void command_parser_fsm();
char* getCommand();
void clearcommand();
unsigned char status();
#endif /* INC_COMMAND_PARSER_H_ */

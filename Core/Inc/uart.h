/*
 * uart.h
 *
 *  Created on: Mar 11, 2024
 *      Author: kccistc
 */

#ifndef INC_UART_H_
#define INC_UART_H_

#include "main.h"

void initUart(UART_HandleTypeDef *inHuart);
uint8_t getChar();
void HAL_UART_RxCpltCallback(UART_HandleTypeDef *huart);

#endif /* INC_UART_H_ */

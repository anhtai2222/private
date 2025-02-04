/*
 * 7seg.c
 *
 *  Created on: Nov 16, 2024
 *      Author: quyng
 */

#include "7seg.h"
#include "main.h"
#include "global.h"
#include "software_timer.h"


#define LED_ON 0
#define LED_OFF 1

#define ENABLE_SEG 0
#define DISABLE_SEG 1

void display7SEG(int num)
{
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_OFF);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_OFF);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_ON);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_ON);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_ON);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_ON);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_ON);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_OFF);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_ON);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_ON);
			break;
		default:
			HAL_GPIO_WritePin(SEG_0_GPIO_Port, SEG_0_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_1_GPIO_Port, SEG_1_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_2_GPIO_Port, SEG_2_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_3_GPIO_Port, SEG_3_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_4_GPIO_Port, SEG_4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_5_GPIO_Port, SEG_5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG_6_GPIO_Port, SEG_6_Pin, LED_OFF);
			break;
	}
}
void display7SEG_2(int num)
{
	switch (num) {
		case 0:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
			break;
		case 1:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
			break;
		case 2:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
			break;
		case 3:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
			break;
		case 4:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
			break;
		case 5:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
			break;
		case 6:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
			break;
		case 7:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
			break;
		case 8:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
			break;
		case 9:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_ON);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_ON);
			break;
		default:
			HAL_GPIO_WritePin(SEG0_GPIO_Port, SEG0_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG1_GPIO_Port, SEG1_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG2_GPIO_Port, SEG2_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG3_GPIO_Port, SEG3_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG4_GPIO_Port, SEG4_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG5_GPIO_Port, SEG5_Pin, LED_OFF);
			HAL_GPIO_WritePin(SEG6_GPIO_Port, SEG6_Pin, LED_OFF);
			break;
	}
}

void enable_seg_0_1(int num)
{
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, ENABLE_SEG);
            HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, DISABLE_SEG);
            break;
        case 1:
            HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, DISABLE_SEG);
            HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, ENABLE_SEG);
            break;
        default:
            HAL_GPIO_WritePin(EN_0_GPIO_Port, EN_0_Pin, DISABLE_SEG);
            HAL_GPIO_WritePin(EN_1_GPIO_Port, EN_1_Pin, DISABLE_SEG);
            break;
    }
}
void enable_seg_2_3(int num)
{
    switch (num) {
        case 0:
            HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, ENABLE_SEG);
            HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, DISABLE_SEG);
            break;
        case 1:
            HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, DISABLE_SEG);
            HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, ENABLE_SEG);
            break;
        default:
            HAL_GPIO_WritePin(EN_2_GPIO_Port, EN_2_Pin, DISABLE_SEG);
            HAL_GPIO_WritePin(EN_3_GPIO_Port, EN_3_Pin, DISABLE_SEG);
            break;
    }
}

void updatebuffer2(int duration)
{
	 led_buffer_2[0] = (duration/ 10) % 10;
	 led_buffer_2[1] = duration % 10;
}
void updatebuffer1(int duration)
{
	 led_buffer_1[0] = (duration/ 10) % 10;
	 led_buffer_1[1] = duration % 10;
}



#ifndef __MOTOR_H
#define __MOTOR_H

#include <reg52.h>

// 定义电机控制引脚
sbit left_motor1 = P1 ^ 0; // 左侧电机控制线1
sbit left_motor2 = P1 ^ 1; // 左侧电机控制线2
sbit right_motor1 = P1 ^ 2; // 右侧电机控制线1
sbit right_motor2 = P1 ^ 3; // 右侧电机控制线2



// 前进函数
void MoveForward();

// 后退函数
void MoveBackward();

// 左转函数
void TurnLeft();

// 右转函数
void TurnRight();

// 停止函数
void Stop();




#endif




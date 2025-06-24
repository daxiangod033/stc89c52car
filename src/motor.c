#include "motor.h"

// 前进函数
void MoveForward()
{
    left_motor1 = 1;
    left_motor2 = 0;
    right_motor1 = 1;
    right_motor2 = 0;
}

// 后退函数
void MoveBackward()
{
    left_motor1 = 0;
    left_motor2 = 1;
    right_motor1 = 0;
    right_motor2 = 1;
}

// 左转函数
void TurnLeft()
{
    left_motor1 = 0;
    left_motor2 = 1;
    right_motor1 = 1;
    right_motor2 = 0;
}

// 右转函数
void TurnRight()
{
    left_motor1 = 1;
    left_motor2 = 0;
    right_motor1 = 0;
    right_motor2 = 1;
}

// 停止函数
void Stop()
{
    left_motor1 = 0;
    left_motor2 = 0;
    right_motor1 = 0;
    right_motor2 = 0;
}
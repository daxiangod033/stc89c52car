#include "motor.h"

// ǰ������
void MoveForward()
{
    left_motor1 = 1;
    left_motor2 = 0;
    right_motor1 = 1;
    right_motor2 = 0;
}

// ���˺���
void MoveBackward()
{
    left_motor1 = 0;
    left_motor2 = 1;
    right_motor1 = 0;
    right_motor2 = 1;
}

// ��ת����
void TurnLeft()
{
    left_motor1 = 0;
    left_motor2 = 1;
    right_motor1 = 1;
    right_motor2 = 0;
}

// ��ת����
void TurnRight()
{
    left_motor1 = 1;
    left_motor2 = 0;
    right_motor1 = 0;
    right_motor2 = 1;
}

// ֹͣ����
void Stop()
{
    left_motor1 = 0;
    left_motor2 = 0;
    right_motor1 = 0;
    right_motor2 = 0;
}
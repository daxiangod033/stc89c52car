#ifndef __MOTOR_H
#define __MOTOR_H

#include <reg52.h>

// ��������������
sbit left_motor1 = P1 ^ 0; // �����������1
sbit left_motor2 = P1 ^ 1; // �����������2
sbit right_motor1 = P1 ^ 2; // �Ҳ���������1
sbit right_motor2 = P1 ^ 3; // �Ҳ���������2



// ǰ������
void MoveForward();

// ���˺���
void MoveBackward();

// ��ת����
void TurnLeft();

// ��ת����
void TurnRight();

// ֹͣ����
void Stop();




#endif




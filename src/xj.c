#include "xj.h"

// ���崫��������
// sbit L = P1 ^ 4; // ��ഫ����
// sbit C = P1 ^ 5; // �м䴫����
// sbit R = P1 ^ 6; // �Ҳഫ����

sbit L = P2 ^ 4; // ��ഫ����
sbit C = P2 ^ 5; // �м䴫����
sbit R = P2^ 6; // �Ҳഫ����

void xunji()
{

    bit left_sensor = L;
    bit center_sensor = C;
    bit right_sensor = R;


 if (left_sensor && center_sensor && right_sensor)
    {
        // ʮ��·�ڻ�ֹͣ�� ֱ��ͨ��
         Stop();
    }


    else if (left_sensor && center_sensor && !right_sensor)
    {
        // ���м�⵽�� ��΢������
        TurnLeft();

    }
    else if (!left_sensor && center_sensor && right_sensor)
    {
        // ���Ҽ�⵽�� ��΢������
        TurnRight();
    }
    else if (!left_sensor && !right_sensor)
    {
        // ���м��⵽�� ֱ��
        MoveForward();
     
    }
    else if (left_sensor && !center_sensor && !right_sensor)
    {
        // ����߼�⵽�� �ϴ������ת
        TurnLeft();
    }
    else if (!left_sensor && !center_sensor && right_sensor)
    {
        // ���ұ߼�⵽�� �ϴ������ת
         TurnRight();
    }
    else if (left_sensor && center_sensor && right_sensor)
    {
        // ʮ��·�ڻ�ֹͣ�� ֱ��ͨ��
         MoveForward();
    }

   


}

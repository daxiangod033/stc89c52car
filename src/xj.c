#include "xj.h"

// 定义传感器引脚
// sbit L = P1 ^ 4; // 左侧传感器
// sbit C = P1 ^ 5; // 中间传感器
// sbit R = P1 ^ 6; // 右侧传感器

sbit L = P2 ^ 4; // 左侧传感器
sbit C = P2 ^ 5; // 中间传感器
sbit R = P2^ 6; // 右侧传感器

void xunji()
{

    bit left_sensor = L;
    bit center_sensor = C;
    bit right_sensor = R;


 if (left_sensor && center_sensor && right_sensor)
    {
        // 十字路口或停止线 直行通过
         Stop();
    }


    else if (left_sensor && center_sensor && !right_sensor)
    {
        // 左中检测到线 轻微左修正
        TurnLeft();

    }
    else if (!left_sensor && center_sensor && right_sensor)
    {
        // 中右检测到线 轻微右修正
        TurnRight();
    }
    else if (!left_sensor && !right_sensor)
    {
        // 仅中间检测到线 直行
        MoveForward();
     
    }
    else if (left_sensor && !center_sensor && !right_sensor)
    {
        // 仅左边检测到线 较大幅度左转
        TurnLeft();
    }
    else if (!left_sensor && !center_sensor && right_sensor)
    {
        // 仅右边检测到线 较大幅度右转
         TurnRight();
    }
    else if (left_sensor && center_sensor && right_sensor)
    {
        // 十字路口或停止线 直行通过
         MoveForward();
    }

   


}

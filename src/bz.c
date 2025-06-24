#include "bz.h"
#include "motor.h"
#include "timer.h"



#define bk_t 200
#define turn_t 150
#define wait_t 200
// 定义传感器引脚
sbit BL = P1 ^ 4; // 左侧传感器
sbit BC = P1 ^ 5; // 中间传感器
sbit BR = P1 ^ 6; // 右侧传感器



sbit buzzer = P2^5;


void bb(){

buzzer = 0;
delay(100);
buzzer = 1;
delay(100);
buzzer = 0;
delay(100);
buzzer = 1;
delay(100);


}


void bizhang()
{
    bit left_sensor = !BL;
    bit center_sensor =!BC;
    bit right_sensor = !BR;

    if (!left_sensor && !center_sensor &&!right_sensor) // 三侧均无障碍
    {
        MoveForward();
        delay(2);
    }
    else if (center_sensor) // 中间有障碍
    {
        // MoveBackward();
        // delay(bk_t);
        //         Stop();
        //         bb();  
        // delay(wait_t);
        // Stop();
    }
    else if (left_sensor) // 左侧有障碍
    {
        MoveBackward();
        delay(bk_t);

                Stop();
                bb();  
        delay(wait_t);
        TurnRight(); // 向右避让
        delay(turn_t);
        Stop();
    }else if (right_sensor) // 右侧有障碍
    {
        MoveBackward();
        delay(bk_t);
        Stop();
        bb();       
         delay(wait_t);
        delay();
        TurnLeft(); // 向左避让
        delay(turn_t);
        Stop();
    }
    
    else // 其他情况（如两侧有障碍）
    {
        MoveBackward();
        delay(bk_t);
        Stop();
        bb();  
        delay(wait_t);
    }
}
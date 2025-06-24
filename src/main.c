#include "bt.h"
#include "bz.h"
#include "motor.h"
#include "xj.h"
#include "timer.h"





void uart_interrupt_do(void) interrupt 4
{
	char data1;
	//判断有无数据需要接收
	if(RI == 1)
	{
		RI = 0;		//手动复位RI
		data1 = SBUF;	//接收数据
	}
	
	//根据data中的数据，来进行相关的应用和处理
	if(data1 == 'a')
	{
		//点灯
		TurnLeft();
	}
	else if(data1 == 'd')
	{
		//灭灯
		TurnRight();
	}
    else if(data1 == 'w')
    {
        //前移
        MoveForward();
    }
    else if(data1 == 's')
    {
        //后退
        MoveBackward();
    }
    else if(data1 == 't')
    {
        //左转
        Stop();
    }
   
    

}


void main(){

// UartInit();
    while (1)
    {

    bizhang();

       
    }
    
}

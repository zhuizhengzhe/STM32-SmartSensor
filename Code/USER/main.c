//////////////////////////////////////////////////////////////////////////////////	 
//  文 件 名   : main.c
//  版 本 号   : v2.0
//  作    者   : kevin
//  生成日期   : 2021-1-9
//  最近修改   : 
//  功能描述   :
//              ----------------------------------------------------------------
//              GND   电源地
//              VCC   3.3v电源
//              SCL   PB13（SCLK）
//              SDA   PB15（MOSI）
//              RES   PD2
//              DC    PB5
//              CS    PB12
//              BLK   PB6
//              MISO  PB7 
//              CS2   PB8
//              ----------------------------------------------------------------
//All rights reserved
//******************************************************************************/
//#include "delay.h"
//#include "sys.h"
//#include "led.h"
//#include "lcd_init.h"
//#include "lcd.h"
//#include "pic.h"
//#include "key.h"
//#include "adc.h"
//#include "dac.h"
//#include "usart.h"
//#include "timer.h"
//#include "usart3.h"
//#include "gizwits_product.h" 
#include "show.h"
////#include "show.c"
///* 用户区当前设备状态结构体*/
//dataPoint_t currentDataPoint;

////WIFI连接状态
////wifi_sta 0: 断开
////         1: 已连接
//u8 wifi_sta=0;

////协议初始化
//void Gizwits_Init(void)
//{	
//	TIM3_Int_Init(9,7199);//1MS系统定时
//  usart3_init(9600);//WIFI初始化
//	memset((uint8_t*)&currentDataPoint, 0, sizeof(dataPoint_t));//设备状态结构体初始化
//	gizwitsInit();//缓冲区初始化
//}


int main(void)
{
	show_init();
//	u8 t1=0;	
//	u16 adcx;
//	float temp1,temp2;
//	u16 dacval=0;
//	u8 key;
//	u8 wifi_con=0;//记录wifi连接状态 1:连接 0:断开
//	delay_init();
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//设置中断优先级分组为组2：2位抢占优先级，2位响应优先级
//	uart_init(115200);	 	//串口初始化为115200
//	LED_Init();//LED初始化
//	LCD_Init();//LCD初始化
//	Adc_Init();		  		//ADC初始化
//	Dac1_Init();		 	//DAC通道1初始化	
//	KEY_Init();          	//初始化与按键连接的硬件接口
//	Gizwits_Init();         //协议初始化
//	
//	LCD_Fill(0,0,LCD_W,LCD_H,WHITE);
//	
//	LED=0;		
//	LCD_ShowString(16,0,"XTU-PXL",RED,WHITE,16,0);
//	LCD_ShowString(16,16,"KEY0:+ KEY1:-",RED,WHITE,16,0);
//	LCD_ShowString(16,35,"ADC1:0.00V",RED,WHITE,16,0);
//	LCD_ShowString(16,55,"DAC1:0.00V",RED,WHITE,16,0);
//	
//	DAC_SetChannel1Data(DAC_Align_12b_R, 0);//DAC通道设置	
//	
//	printf("--------机智云IOT-传感器检测浓度报警实验----------\r\n");	
//	
//	while(1)
//	{
//		 if(wifi_con!=wifi_sta)
//		 {
//			 wifi_con=wifi_sta;
//			 wifi_con?printf("connect"):printf("close");
//		 }	 	
//		
//    t1++;
//		key=KEY_Scan(0);			  
//		if(key==KEY0_PRES)
//		{		 
//			if(dacval<4000)dacval+=200;
//			DAC_SetChannel1Data(DAC_Align_12b_R, dacval);       //DAC通道设置
//		}else if(key==KEY1_PRES)	
//		{
//			if(dacval>200)dacval-=200;
//			else dacval=0;
//			DAC_SetChannel1Data(DAC_Align_12b_R, dacval);      //DAC
//		}	 
//		if(t1==10||key==KEY0_PRES||key==KEY1_PRES) 	        //WKUP/KEY1按下了,或者定时时间到了
//		{	  
// 			adcx=DAC_GetDataOutputValue(DAC_Channel_1);      //DAC通道设置
//			temp1=(float)adcx*(3.3/4096);			               //得到DAC电压值
//			LCD_ShowFloatNum1(56,55,temp1,3,RED,WHITE,16); 

// 			adcx=Get_Adc_Average(ADC_Channel_1,10);		      //得到ADC转换值	  
//			temp2=(float)adcx*(3.3/4096);			              //得到ADC电压值
//			LCD_ShowFloatNum1(56,35,temp2,3,RED,WHITE,16); 

//			LED=!LED;	   
//			t1=0;
//		}	    
//		
//		currentDataPoint.valueInput_Voltage = temp1;
//		currentDataPoint.valueCollection_Voltage = temp2;
//		
//		gizwitsHandle((dataPoint_t *)&currentDataPoint);  //协议处理
//		
//		//delay_ms(10);
//	}
}


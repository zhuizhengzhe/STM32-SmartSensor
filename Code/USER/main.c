//////////////////////////////////////////////////////////////////////////////////	 
//  �� �� ��   : main.c
//  �� �� ��   : v2.0
//  ��    ��   : kevin
//  ��������   : 2021-1-9
//  ����޸�   : 
//  ��������   :
//              ----------------------------------------------------------------
//              GND   ��Դ��
//              VCC   3.3v��Դ
//              SCL   PB13��SCLK��
//              SDA   PB15��MOSI��
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
///* �û�����ǰ�豸״̬�ṹ��*/
//dataPoint_t currentDataPoint;

////WIFI����״̬
////wifi_sta 0: �Ͽ�
////         1: ������
//u8 wifi_sta=0;

////Э���ʼ��
//void Gizwits_Init(void)
//{	
//	TIM3_Int_Init(9,7199);//1MSϵͳ��ʱ
//  usart3_init(9600);//WIFI��ʼ��
//	memset((uint8_t*)&currentDataPoint, 0, sizeof(dataPoint_t));//�豸״̬�ṹ���ʼ��
//	gizwitsInit();//��������ʼ��
//}


int main(void)
{
	show_init();
//	u8 t1=0;	
//	u16 adcx;
//	float temp1,temp2;
//	u16 dacval=0;
//	u8 key;
//	u8 wifi_con=0;//��¼wifi����״̬ 1:���� 0:�Ͽ�
//	delay_init();
//	NVIC_PriorityGroupConfig(NVIC_PriorityGroup_2);//�����ж����ȼ�����Ϊ��2��2λ��ռ���ȼ���2λ��Ӧ���ȼ�
//	uart_init(115200);	 	//���ڳ�ʼ��Ϊ115200
//	LED_Init();//LED��ʼ��
//	LCD_Init();//LCD��ʼ��
//	Adc_Init();		  		//ADC��ʼ��
//	Dac1_Init();		 	//DACͨ��1��ʼ��	
//	KEY_Init();          	//��ʼ���밴�����ӵ�Ӳ���ӿ�
//	Gizwits_Init();         //Э���ʼ��
//	
//	LCD_Fill(0,0,LCD_W,LCD_H,WHITE);
//	
//	LED=0;		
//	LCD_ShowString(16,0,"XTU-PXL",RED,WHITE,16,0);
//	LCD_ShowString(16,16,"KEY0:+ KEY1:-",RED,WHITE,16,0);
//	LCD_ShowString(16,35,"ADC1:0.00V",RED,WHITE,16,0);
//	LCD_ShowString(16,55,"DAC1:0.00V",RED,WHITE,16,0);
//	
//	DAC_SetChannel1Data(DAC_Align_12b_R, 0);//DACͨ������	
//	
//	printf("--------������IOT-���������Ũ�ȱ���ʵ��----------\r\n");	
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
//			DAC_SetChannel1Data(DAC_Align_12b_R, dacval);       //DACͨ������
//		}else if(key==KEY1_PRES)	
//		{
//			if(dacval>200)dacval-=200;
//			else dacval=0;
//			DAC_SetChannel1Data(DAC_Align_12b_R, dacval);      //DAC
//		}	 
//		if(t1==10||key==KEY0_PRES||key==KEY1_PRES) 	        //WKUP/KEY1������,���߶�ʱʱ�䵽��
//		{	  
// 			adcx=DAC_GetDataOutputValue(DAC_Channel_1);      //DACͨ������
//			temp1=(float)adcx*(3.3/4096);			               //�õ�DAC��ѹֵ
//			LCD_ShowFloatNum1(56,55,temp1,3,RED,WHITE,16); 

// 			adcx=Get_Adc_Average(ADC_Channel_1,10);		      //�õ�ADCת��ֵ	  
//			temp2=(float)adcx*(3.3/4096);			              //�õ�ADC��ѹֵ
//			LCD_ShowFloatNum1(56,35,temp2,3,RED,WHITE,16); 

//			LED=!LED;	   
//			t1=0;
//		}	    
//		
//		currentDataPoint.valueInput_Voltage = temp1;
//		currentDataPoint.valueCollection_Voltage = temp2;
//		
//		gizwitsHandle((dataPoint_t *)&currentDataPoint);  //Э�鴦��
//		
//		//delay_ms(10);
//	}
}


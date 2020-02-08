/*长度单位转换-宏定义*/
#include<stdio.h>
#define Mile_to_meter 1609  /*1英里=1609米*/
#define Foot_to_centimeter 30.48  /*1英尺=30.48厘米*/
#define Inch_to_centimeter 2.54		/*1英寸=2.54厘米*/
int  main(void)
{
	float foot,inch,mile;
	printf("Input mile,foot and inch:");
	scanf("%f%f%f",&mile,&foot,&inch);
	printf("%f miles = %f meters\n",mile,mile*Mile_to_meter);
	printf("%f foot = %f centimeter\n",foot,foot*Foot_to_centimeter);
	printf("%f Inch = %f centimeter\n",inch,inch*Inch_to_centimeter);
	return 0;
 } 

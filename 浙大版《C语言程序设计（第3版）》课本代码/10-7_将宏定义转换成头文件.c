/*长度单位转换-宏定义*/
#include<stdio.h>
#include"length.h"
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

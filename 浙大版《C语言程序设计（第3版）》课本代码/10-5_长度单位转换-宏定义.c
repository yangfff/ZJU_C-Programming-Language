/*���ȵ�λת��-�궨��*/
#include<stdio.h>
#define Mile_to_meter 1609  /*1Ӣ��=1609��*/
#define Foot_to_centimeter 30.48  /*1Ӣ��=30.48����*/
#define Inch_to_centimeter 2.54		/*1Ӣ��=2.54����*/
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

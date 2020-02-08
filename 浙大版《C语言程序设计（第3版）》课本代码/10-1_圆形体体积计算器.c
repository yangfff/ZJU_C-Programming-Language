/*圆形体体积计算器，1：计算球体；2：计算圆柱体；3：计算圆锥体*/
#include<stdio.h>
#include<math.h>
#define PI 3.141592654
void cal (int sel);
double vol_ball(void);
double vol_cylind(void);
double vol_cone(void);

int main (void)
{
	int sel;
	
	/*循环选择计算圆形体的体积，直到输入非1-3的数字为止*/
	while(1){  /*永久循环，通过循环体中的break语句结束循环*/
		printf(" 1-计算球体体积"); 
		printf(" 2-计算圆柱体体积"); 
		printf(" 3-计算圆锥体体积"); 
		printf(" 其他-退出程序运行\n"); 
		printf("请输入计算命令："); 
		scanf("%d",&sel);
		if(sel<1||sel>3)
			break;
		else
			cal(sel) ;
	} 
	return 0;
 }  
 
 /*主控函数*/
 void cal (int sel)
 {
 	switch(sel){
 		case 1:
 			printf("球体体积为：%.2f\n",vol_ball());
 			break;
 		case 2:
 			printf("圆柱体体积为：%.2f\n",vol_cylind());
 			break;
 		case 3:
 			printf("圆锥体积为：%.2f\n",vol_cone());
 			break;
    }
 }
 
 double vol_ball(void)
{
	double r;
	printf("请输入球体的半径：");
	scanf("%lf",&r);
	return(4.0/3.0*PI*r*r*r);
 } 
 
  double vol_cylind(void)
{
	double h,r;
	printf("请输入圆柱体的底圆半径和高：");
	scanf("%lf%lf",&r,&h);
	return(PI*r*r*h);
 } 
 
   double vol_cone(void)
{
	double h,r;
	printf("请输入圆锥体的底圆半径和高：");
	scanf("%lf%lf",&r,&h);
	return(PI*r*r*h/3.0);
 } 
 


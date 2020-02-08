/*计算数值积分(函数指针作为函数参数示例)*/
#include<stdio.h>
#include<math.h>
double calc (double (*funp)(double),double a,double b);
/*函数原型说明*/
double f1(doublex),f2(double x);
int main(void)
{
	double result;
	double (*funp),f2(double x);
	
	result=calc(f1,0.0,1.0);/*函数名f1作为哈桑农户calc的形参*/
	printf("1:result=%.4f\n",result);
	funp=f2;/*对函数指针funp赋值*/
	result=calc(funp,1.0,2.0) ;
	printf("2:result=%.4f\n",result);
	
	return 0;
 } 
 
 double calc (double (*funp)(double),double a,double b)
 {
 	double z;
 	z = (b-a)/2*((*funp)(a)+(*funp)(b));/*调用funp指向的函数*/
 	return (z); 
 }
 
 double f1(double x)
 {
 	return(x*x);
 }
 
 double f2(double x)
 {
 	return(sin(x)/x);
 }

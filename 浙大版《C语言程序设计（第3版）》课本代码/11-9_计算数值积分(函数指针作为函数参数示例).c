/*������ֵ����(����ָ����Ϊ��������ʾ��)*/
#include<stdio.h>
#include<math.h>
double calc (double (*funp)(double),double a,double b);
/*����ԭ��˵��*/
double f1(doublex),f2(double x);
int main(void)
{
	double result;
	double (*funp),f2(double x);
	
	result=calc(f1,0.0,1.0);/*������f1��Ϊ��ɣũ��calc���β�*/
	printf("1:result=%.4f\n",result);
	funp=f2;/*�Ժ���ָ��funp��ֵ*/
	result=calc(funp,1.0,2.0) ;
	printf("2:result=%.4f\n",result);
	
	return 0;
 } 
 
 double calc (double (*funp)(double),double a,double b)
 {
 	double z;
 	z = (b-a)/2*((*funp)(a)+(*funp)(b));/*����funpָ��ĺ���*/
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

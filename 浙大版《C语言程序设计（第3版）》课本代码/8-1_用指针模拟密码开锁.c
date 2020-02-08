/*利用指针模拟密码开锁*/
#include<stdio.h>
int main(void)
{
	int x=5342;
	int *p=NULL;
	
	p=&x;
	
	/*通过变量x输出密码值*/
	printf("通过变量x输出密码值：%d\n",x);
	printf("通过变量的地址%x输出密码值：%d\n",p,*p);
 
 	return 0;
 } 

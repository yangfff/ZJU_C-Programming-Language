/*指针和数组及存储单元*/
#include<stdio.h>
int main(void)
{
	double a[2],*p,*q;
	p=&a[0];
	q=p+1;
	printf("q<p=%d\n",q<p);
	printf("q-p=%d\n",q-p);
	printf("(int)q-(int)p=%d\n",(int)q-(int)p);
	return 0;
 } 

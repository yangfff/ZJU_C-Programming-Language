/*����ָ��ģ�����뿪��*/
#include<stdio.h>
int main(void)
{
	int x=5342;
	int *p=NULL;
	
	p=&x;
	
	/*ͨ������x�������ֵ*/
	printf("ͨ������x�������ֵ��%d\n",x);
	printf("ͨ�������ĵ�ַ%x�������ֵ��%d\n",p,*p);
 
 	return 0;
 } 

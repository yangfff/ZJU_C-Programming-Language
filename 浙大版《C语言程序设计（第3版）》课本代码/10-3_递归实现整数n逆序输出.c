/*�ݹ�ʵ������n�������*/
#include<stdio.h>
void reverse (int num);
int main(void)
{
	int num;
	
	scanf("%d",&num);
	reverse(num);
	return 0;
}

void reverse (int num)
{
	if(num<=9)
		printf("%d",num);/*�ݹ����*/
	else{
		printf("%d",num%10);
		reverse(num/10);/*�ݹ����*/ 
	}
}

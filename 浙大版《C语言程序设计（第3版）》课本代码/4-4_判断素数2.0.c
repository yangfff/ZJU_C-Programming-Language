#include<stdio.h>
int main (void)
{
	int i,n;

	printf("**********************\n�ж�һ�����ǲ�������\n**********************\n�������ֻ�ܱ�1�ͱ�������\n\n");
	
	printf("������һ��ֵ��");
	scanf("%d",&n);
	
	for(i=2;i<n/2;i++)
		if(n%i==0)
			break;
	if(i>n/2&&n!=1)
		printf("\n%d������",n);
	else
		printf("\n%d��������",n);
		
	return 0;
 } 

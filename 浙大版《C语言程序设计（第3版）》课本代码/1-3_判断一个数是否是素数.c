#include<stdio.h>
int main (void)
{
	int i,n,sum=0;

	printf("**********************\n�ж�һ�����ǲ�������\n**********************\n�������ֻ�ܱ�1�ͱ�������\n\n");
	
	printf("������һ��ֵ��");
	scanf("%d",&n);
	
	for(i=2;i<n/2;i++){
		if(n%i==0){
		printf("\n%d�ܱ�%d����\n",n,i);
		sum = sum+1;
		}
	}
	
	printf("\n%d�ܱ�%d����������\n",n,sum);
	
	if(sum=0&&i!=1){
		printf("\n%d������",n);
	}else{
	
		printf("\n%d��������",n);
	}
	
	return 0;
 } 

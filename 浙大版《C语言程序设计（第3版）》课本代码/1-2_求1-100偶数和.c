#include<stdio.h>
int main (void)
{
	int i,n,m,sum=0;

	printf("**********************\n��ż���ͳ���\n**********************\n");
	
	printf("�������С��һ������");
	scanf("%d",&n);
	
	printf("������ϴ��һ������");
	scanf("%d",&m);
	
	for(i=n;i<=m;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf ("%d-%dż����Ϊ��%d",n,m,sum);
	
	return 0;
 } 

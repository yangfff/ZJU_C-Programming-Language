#include<stdio.h>
int main (void)
{
	int i,n,m,sum=0;

	printf("**********************\n求偶数和程序\n**********************\n");
	
	printf("请输入较小的一个数：");
	scanf("%d",&n);
	
	printf("请输入较大的一个数：");
	scanf("%d",&m);
	
	for(i=n;i<=m;i++){
		if(i%2==0){
			sum=sum+i;
		}
	}
	printf ("%d-%d偶数和为：%d",n,m,sum);
	
	return 0;
 } 

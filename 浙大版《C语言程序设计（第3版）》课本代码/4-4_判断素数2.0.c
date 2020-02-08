#include<stdio.h>
int main (void)
{
	int i,n;

	printf("**********************\n判断一个数是不是素数\n**********************\n素数概念：只能被1和本身整除\n\n");
	
	printf("请输入一个值：");
	scanf("%d",&n);
	
	for(i=2;i<n/2;i++)
		if(n%i==0)
			break;
	if(i>n/2&&n!=1)
		printf("\n%d是素数",n);
	else
		printf("\n%d不是素数",n);
		
	return 0;
 } 

#include<stdio.h>
int main (void)
{
	int i,n,sum=0;

	printf("**********************\n判断一个数是不是素数\n**********************\n素数概念：只能被1和本身整除\n\n");
	
	printf("请输入一个值：");
	scanf("%d",&n);
	
	for(i=2;i<n/2;i++){
		if(n%i==0){
		printf("\n%d能被%d整除\n",n,i);
		sum = sum+1;
		}
	}
	
	printf("\n%d能被%d个整数整除\n",n,sum);
	
	if(sum=0&&i!=1){
		printf("\n%d是素数",n);
	}else{
	
		printf("\n%d不是素数",n);
	}
	
	return 0;
 } 

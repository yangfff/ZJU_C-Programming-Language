/*求任意个整数求和，并使用动态内训分配方法为n个整数分配空间。*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,sum,i,*p;
	printf("Enter n:");
	scanf("%d",&n);
	/*为数组p分配n个整数类型大小的空间*/
	if(NULL == (p = (int**)malloc(sizeof(int*)*n))){
		printf("Not able to allocate memory.\n");
		exit(1);
	}
	printf("Enter %d integers:",n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	sum=0;
	for(i=0;i<n;i++)
		sum=sum+*(p+i);
	printf("The sum is %d\n",sum);
	free (p);
	
	
	return 0;
}

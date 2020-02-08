/*输出所有大于平均值的数*/
#include<stdio.h>
int main(void)
{
	int i;
	double average,sum;
	int a[10];
	printf("Enter 10 integers:");
	sum=0;
	for(i=0;i<10;i++){
		scanf("%d",&a[i]);
		sum = sum+a[i];
	}
	average=sum/10;
	printf("average=%.2f\n",average);
	printf(">average: ");
	for(i=0;i<10;i++){
		if(a[i]>average)
		printf("%d ",a[i]);
		}
		printf("\n");
		return 0;
 } 

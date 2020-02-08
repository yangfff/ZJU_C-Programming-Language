#include <stdio.h>
int main(void)
{
	int count,i,n;
	double grace,total;
	
	printf("Enter n :");
	scanf("%d",&n);
	total = 0;
	count = 0;
	for(i=1;i<=n;i++){
		printf("Enter grace #%d : ",i);
		scanf("%f",&grace);
		total=total+grace;
		if(grace<60){
			count++;
		}
	}
	printf("Gracr average=%.2f\n",total/n);
	printf("Number of failures=%d\n",count);
	return 0;
}

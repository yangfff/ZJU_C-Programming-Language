/*2-6 输出华氏-摄氏转化表*/ 
#include<stdio.h>

int main(void)
{
	int fahr,lower,upper;
	double celsius;
	
	printf("Enter lower and upper :");
	scanf("%d%d",&lower,&upper); 
	
	if(upper<=upper){
		printf("fahr celsius\n");
		for(fahr = lower; fahr<=upper;fahr++){
			celsius = (5.0/9.0)*(fahr-30);
			printf("%4d%9.1f\n",fahr,celsius);
		} 
	}else
		printf("Invalid Value!\n");
	
	return 0;
 } 

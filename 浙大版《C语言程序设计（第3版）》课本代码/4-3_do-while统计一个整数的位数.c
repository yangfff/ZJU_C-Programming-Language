/*do-while统计一个整数的位数*/
#include<stdio.h>
int main(void)
{
	int count,number;
	
	count = 0;
	printf("Enter a number:");
	scanf("%d",&number);
	if(number<0) number = -number;
	
	do{
		number=number/10;
		count++;
	}while(number!=0);
	
	
	printf("It contain %d digits.\n",count);
	
	return 0;
}

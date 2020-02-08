/*用格雷戈里公式求 Π的近似值*/
 
#include <stdio.h>
#include <math.h>

int main(void)
{
	int denominator,flag;
	double item,pi;
	
	flag=1;
	denominator = 1;
	item = 1.0;
	pi = 0;
	
	while(fabs(item)>=0.0001){
		item=flag*1.0/denominator;
		pi=pi+item;
		flag=-flag;
		denominator=denominator+2;
	}
	pi=pi*4;
	printf("pi=%.4f\n",pi);
	
	return 0;
	
 } 

/*求阶乘问题*/

#include <stdio.h>

int main (void){

	int i,n;
	double product;

	printf("请输入您想求阶乘的数字："); 
	scanf ("%d",&n);
	
	product=1;
	for(i=1;i<=n;i++){
		product = product*i;
	} 
	printf("这个数字的阶乘为：%.0f",product);
	return 0;
}


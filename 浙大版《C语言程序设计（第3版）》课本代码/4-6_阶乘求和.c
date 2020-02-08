/*求阶乘和问题*/

#include <stdio.h>

int main (void){

	int i,n;
	double sum,product;

	printf("请输入您想求阶乘的数字："); 
	scanf ("%d",&n);
	
	sum = 0;
	product=1;
	for(i=1;i<=n;i++){
		product = product*i;
		sum = sum + product;
	} 
	printf("这个数字的阶乘为：%.0f\n",product);
	printf("从1到该数字的阶乘和为：%.0f",sum);
	
	
	return 0;
}


/*2-11调用函数计算阶乘*/

#include <stdio.h>

double factorial (int n); //函数声明 


int main (void){

	int n;

	printf("请输入您想求阶乘的数字："); 
	scanf ("%d",&n);
	
	printf("这个数字的阶乘为：%.0f\n",factorial(n));//注意这里是 “函数名（变量名）” 
	
	//丰丰提问：如果只输入“函数名”的话，printf的将是什么呢？
	
	}

double factorial (int n){

	int i;
	double fact = 1;

	for (i=1; i<=n; i++){
		fact = fact * i ;
	}
		

	return fact;
}


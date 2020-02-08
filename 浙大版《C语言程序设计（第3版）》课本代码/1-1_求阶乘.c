/*求阶乘问题*/

#include <stdio.h>

int factorial (int n); //函数声明 


int main (void){

	int n;

	printf("请输入您想求阶乘的数字："); 
	scanf ("%d",&n);
	
	printf("这个数字的阶乘为：%d\n",factorial(n));//注意这里是 “函数名（变量名）” 
	
	//丰丰提问：如果只输入“函数名”的话，printf的将是什么呢？
	
	}

int factorial (int n){

	int i, fact = 1;

	for (i=1; i<=n; i++){
		fact = fact * i ;
	}
		

	return fact;
}


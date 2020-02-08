/*汉诺（Hanoi）塔问题-递归实现*/
#include<stdio.h>
void hanoi(int n,char a,char b,char c);
int main(void)
{
	int n;
	
	printf("input the number of disk:");
	scanf("%d",&n);
	printf("the steps for %d disk:\n",n);
	hanoi(n,'a','b','c');
	
	return 0;
 } 
 
 /*搬动n个盘，从a到b,c为中间过渡*/
void hanoi(int n,char a,char b,char c)
{
	if(n==1)
		printf("%c-->%c\n",a,b);
	else{
		hanoi(n-1,a,c,b);
		printf("%c-->%c\n",a,b);
		hanoi(n-1,c,b,a);
	}
}

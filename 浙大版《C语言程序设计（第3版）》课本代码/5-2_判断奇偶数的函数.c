/*ÅĞ¶ÏÆæÅ¼ÊıµÄº¯Êı*/
#include<stdio.h>
int even(int n);
int main(void)
{
	int number;
	printf("Enter number:");
	scanf("%d",&number);
	number = even(number);
	if (number==1)
		printf(" number is even");
	else printf(" number is odd");
	return 0;
 } 
 
 int even(int n)
 {
 	if(n%2==0)
 		return 1;
 	else
 		return 0;
 }

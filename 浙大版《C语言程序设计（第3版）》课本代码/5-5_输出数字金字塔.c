/*Êä³öÊı×Ö½ğ×ÖËş*/
#include<stdio.h>
void pyramid(int n);
int main(void)
{
	pyramid(5);
	return 0;
 } 
 
 void pyramid(int n)
 {
 	int i,j;
 	for(i=1;i<=n;i++){
 		for(j=1;j<=n-i;j++)
 			printf(" ");
 		for(j=1;j<=i;j++)
 			printf("%d ",i);
 		putchar('\n');
	 }
 }

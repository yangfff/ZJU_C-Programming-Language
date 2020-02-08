/*使用函数求100以内的全部素数*/
/*m为素数时返回1，不是素数返回0*/
#include <stdio.h>
#include <math.h>
int prime(int m);

int main(void)
{
	int count,m;
	count=0;
	for(m=2;m<=100;m++){
		if(prime(m!=0)){
			printf("%6d",m);
			count++;
			if(count%10==0) printf("\n");
		} 
	} 
	printf("\n");
	
	return 0;
 } 
 
 int prime(int m)
 {
 	int i,n;
	 n=sqrt(m);
	for(i=2;i<=n;i++)
		if(m%i==0){
			return 0;
		}	
 	
 	return 1;
 }

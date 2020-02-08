/*求100以内的全部素数*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	int count,i,m,n;
	count=0;
	for(m=2;m<=100;m++){
		n=sqrt(m);
		for(i=2;i<=n;i++)
			if(m%i==0)	
			break;
		if(i>n){
			printf("%6d",m);
			count++;
			if(count%10==0)
				printf("\n");
		} 
	} 
	printf("\n");
	
	return 0;
 } 

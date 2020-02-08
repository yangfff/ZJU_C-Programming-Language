/*在数组中查找一个给定的数（顺序查找法）*/
#include<stdio.h>
int main(void)
{
	int i,flag,x;
	int a[5];
	
	printf("Enter 5 integers:");
	for(i=0;i<5;i++)
		scanf("%d",&a[i]);
	printf("Enter x:");
	scanf("%d",&x);
	
	flag=0;
	for(i=1;i<5;i++)
		if(a[i]==x){
			printf("Index is %d\n",i);
			flag=1;
			break;
		}	 
	if(flag==0)
		printf("Not Found\n");
	return 0;
 } 

 

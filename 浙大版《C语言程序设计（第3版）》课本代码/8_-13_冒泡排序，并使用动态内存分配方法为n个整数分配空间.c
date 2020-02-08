/*冒泡排序，并使用动态内存分配方法为n个整数分配空间*/
#include<stdio.h>
void bubble(int *p,int n);

int main(void)
{
	int n,*p,i;
	
	printf("Enter n:");
	scanf("%d",&n);
	
	/*为数组p分配n个整数类型大小的空间*/
	if(NULL == (p = (int**)malloc(sizeof(int*)*n))){
		printf("Not able to allocate memory.\n");
		exit(1);
	}
	
	printf("Enter %d integers:",n);
	for(i=0;i<n;i++)
		scanf("%d",p+i);
	bubble(p,n);
	printf("After scorted=",n);
	for(i=0;i<n;i++)
		printf("%3d",*(p+i)) ;
		
	return 0;
}

void bubble(int *p,int n)
{
	int i,j,t;
	for(i=1;i<n;i++)
		for(j=0;j<n-i;j++)
			if(*(p+j)>*(p+j+1)){
				t=*(p+j);
				*(p+j)=*(p+j+1);
				*(p+j+1)=t;
			}
}

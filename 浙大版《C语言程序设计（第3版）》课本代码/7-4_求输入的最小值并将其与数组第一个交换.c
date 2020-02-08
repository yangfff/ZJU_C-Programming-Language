/*
输入一个正整数n(1<n<=10),再输入n个整数，将他们存入数组a中
1、输出最小值和她所对应的下标；
2、将最小值与第一个数交换，输出交换后的n个数。 
*/
#include<stdio.h>
int main(void)
{
	int i,index,n;
	int a[10];
	printf("请输入 n:");
	scanf("%d",&n);
	
	printf("请输入%d个数：",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	index=0;
	for(i=1;i<n;i++)
		if(a[i]<a[index])
			index=i;
	printf("最小值是： %d\t最小值位数是： %d\n",a[index],index);
	
	printf("将最小值与第一位的数交换：\n"); 
	int temp;
	temp= a[index];
	a[index]=a[0];
	a[0]=temp;
	for(i=1;i<n;i++)
		printf("%d ",a[i]);	
	return 0;		
 } 

/*
����һ��������n(1<n<=10),������n�������������Ǵ�������a��
1�������Сֵ��������Ӧ���±ꣻ
2������Сֵ���һ��������������������n������ 
*/
#include<stdio.h>
int main(void)
{
	int i,index,n;
	int a[10];
	printf("������ n:");
	scanf("%d",&n);
	
	printf("������%d������",n);
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	index=0;
	for(i=1;i<n;i++)
		if(a[i]<a[index])
			index=i;
	printf("��Сֵ�ǣ� %d\t��Сֵλ���ǣ� %d\n",a[index],index);
	
	printf("����Сֵ���һλ����������\n"); 
	int temp;
	temp= a[index];
	a[index]=a[0];
	a[0]=temp;
	for(i=1;i<n;i++)
		printf("%d ",a[i]);	
	return 0;		
 } 

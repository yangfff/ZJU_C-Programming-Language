/*��ŵ��Hanoi��������-�ݹ�ʵ��*/
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
 
 /*�ᶯn���̣���a��b,cΪ�м����*/
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

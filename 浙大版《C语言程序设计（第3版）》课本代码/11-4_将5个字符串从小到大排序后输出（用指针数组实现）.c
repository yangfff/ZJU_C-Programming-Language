/*将5个字符串从小到大排序后输出（用指针数组实现）*/
#include<stdio.h>
#include<string.h>
void fsort(char*color[],int n);
int main(void)
{
	int i;
	char *pcolor[]={"red","blue","yellow","green","black"};
	fsort(pcolor,5);
	for(i=0;i<5;i++)
		printf("%s ",pcolor[i]);
	return 0;
 } 
 
void fsort(char*color[],int n)
{
	int k,j;
	char *temp;
	for(k=1;k<n;k++)
		for(j=0;j<n-k;j++)
			if(strcmp(color[j],color[j+1])>0){
				temp=color[j];
				color[j]=color[j+1];
				color[j+1]=temp;
			}
}

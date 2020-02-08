/*输入5个字符串，输出其中最小的字符串*/
#include<stdio.h>
#include<string.h> 
int main(void)
{
	int i;
	char sx[80],smin[80];
	
	scanf("%s",sx);
	strcpy(smin,sx);
	for(i=1;i<5;i++){
		scanf("%s",sx);
		if(strcmp(sx,smin)<0)
			strcpy(smin,sx);
	}
	printf("min is %s\n",smin);
	return 0;
}

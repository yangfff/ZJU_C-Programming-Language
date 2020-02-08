/*解密藏头诗，指针数组操作*/
#include<stdio.h>
int main(void)
{
	int i;
	char *poem[4]={"我爱夏日长，","是为汉阳王。","杨柳郁青青，","丰年俎豆盈。"};
	char mean[10];
	for(i=0;i<4;i++){/*取每行第一个汉字存入mean*/
	mean[2*i]=*(poem[i]);
	mean[2*i+1]=*(poem[i]+1);		
	}
	mean[2*i]='\0';
	printf("%s\n",mean);
	return 0;
 } 


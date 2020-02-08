/*显示所有的命令行参数*/
#include<stdio.h>
int main(int argc,char*argv[])
{
	int k;
	for(k=1;k<argc;k++)/*从第一个命令行参数开始*/
		printf("%s ",argv[k]);/*打印命令行参数*/
	printf("\n");
	return 0; 
 } 

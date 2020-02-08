	/*查找奥运五环色的位置，用二级指针操作指针数组实现*/
	#include<stdio.h>
	#include<string.h>
	int main(void)
	{
		int i;
		char *color[5]={"red","blue","yellow","green","black"};/*指针数组初始化*/
		char **pc;/*定义二级指针变量*/ 
		char str[20];
		
		pc=color;/*二级指针赋值*/ /*或pc=&color[0]*/
		printf("Input a color:");
		scanf("%s",str);
		for(i=0;i<5;i++)
			if(strcmp(str,*(pc+i))==0)
				break;
			if(i<5)
				printf("position:%d\n",i+1);
			else
				printf("Not Found!\n");
				
		return 0; 
	 } 

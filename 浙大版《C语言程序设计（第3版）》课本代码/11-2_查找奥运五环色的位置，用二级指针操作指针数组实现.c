	/*���Ұ����廷ɫ��λ�ã��ö���ָ�����ָ������ʵ��*/
	#include<stdio.h>
	#include<string.h>
	int main(void)
	{
		int i;
		char *color[5]={"red","blue","yellow","green","black"};/*ָ�������ʼ��*/
		char **pc;/*�������ָ�����*/ 
		char str[20];
		
		pc=color;/*����ָ�븳ֵ*/ /*��pc=&color[0]*/
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

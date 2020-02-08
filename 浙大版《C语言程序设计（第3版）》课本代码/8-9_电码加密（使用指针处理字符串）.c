/*电码加密（使用指针处理字符串）
变换规则：小写字母z变换成a，其他字母变换成为该字母ASCII码顺序后一位的字母 。 
*/ 

#include<stdio.h>
#include<string.h>
#define MAXLINE 100 //定义符号变量
void encrypt(char *); 
int main(void)
{
	char line[MAXLINE];
	
	printf("Input the string:");
	gets(line);
	encrypt(line);
	printf("%s%s\n","After being encrypted:",line);
	return 0;
}

void encrypt(char *s)
{
	for(;*s!='\0';s++)
		if(*s=='z')
			*s='a';
		else
			*s=*s+1;
}

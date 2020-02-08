/*查找字符串中的字符位置（指针作为函数的返回值实例）*/
#include<stdio.h> 
char *match(char *s,char ch);
int main(void)
{
	char ch,str[80],*p=NULL;
	
	printf("Please input the string:\n");
	scanf("%s",str);
	getchar();/*跳过输入字符串和输入字符之间的分隔符*/
	
	ch=getchar();
	if((p=match(str,ch))!=NULL)
		printf("%s\n",p);
	else
		printf("Not Found！\n");
	return 0; 
	
}

char *match(char *s,char ch)
{
	while(*s!='\0')
		if(*s==ch)
			return (s);
		else
			s++;
	return(NULL);
}

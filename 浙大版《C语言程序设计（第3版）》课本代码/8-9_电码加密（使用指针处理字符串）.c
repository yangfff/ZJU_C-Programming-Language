/*������ܣ�ʹ��ָ�봦���ַ�����
�任����Сд��ĸz�任��a��������ĸ�任��Ϊ����ĸASCII��˳���һλ����ĸ �� 
*/ 

#include<stdio.h>
#include<string.h>
#define MAXLINE 100 //������ű���
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

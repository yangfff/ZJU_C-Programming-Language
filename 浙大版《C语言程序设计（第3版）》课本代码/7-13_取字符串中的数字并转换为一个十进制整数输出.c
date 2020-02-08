/*提取字符串中的数字并转换为一个十进制整数输出*/
#include<stdio.h>
int main(void)
{
	int number,i;
	char str[80];
	
	printf("Enter a string:");
	i=0;
	while((str[i]=getchar())!='\n')
		i++;
	str[i]='\0';
	
	number =0;
	for(i=0;str[i]!='\0';i++)
		if(str[i]<='9'&&str[i]>='0')/*判断是数字字符*/
			number=number*10+str[i]-'0';/*数字字符转换为数字*/ 
	printf("digit=%d\n",number);
	return 0;
 } 

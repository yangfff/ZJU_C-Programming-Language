/*��ȡ�ַ����е����ֲ�ת��Ϊһ��ʮ�����������*/
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
		if(str[i]<='9'&&str[i]>='0')/*�ж��������ַ�*/
			number=number*10+str[i]-'0';/*�����ַ�ת��Ϊ����*/ 
	printf("digit=%d\n",number);
	return 0;
 } 

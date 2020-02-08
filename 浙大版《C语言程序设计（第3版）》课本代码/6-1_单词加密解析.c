/*单词加密解析。加密过程：先将小写字母转为大写字母，再将大写字母的ASCII码对10整除后取余数，从而得到一个六位整数密码*/
#include<stdio.h>
int main(void)
{
	int i;
	char ch_lower,ch_upper;
	for(i=1;i<=6;i++){
		scanf("%c",&ch_lower);
		if(ch_lower>='a'&&ch_lower<='z')
			ch_upper=ch_lower-'a'+'A';
		printf("%c->%c->%d\n",ch_lower,ch_upper,ch_upper%10);
	}
	return 0;
 } 

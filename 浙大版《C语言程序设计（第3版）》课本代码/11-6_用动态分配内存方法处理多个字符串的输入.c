/*�ö�̬�����ڴ淽���������ַ���������*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
	int i,n;
	char *color[20],str[15];
	printf("Please input some words about color:\n");
	scanf("%s",str);
	while(str[0]!='#'){
		color[n]=(char *)malloc(sizeof(char)*(strlen(str)+1));/*��̬����*/
		strcpy(color[n],str);/*��������ַ�����ֵ����̬�ڴ浥Ԫ*/
		n++;
		scanf("%s",str); 
	}
	printf("These words are:");
	for(i=n-1;i>=1;i--){/*�������*/
		printf("%s ",color[i]);
		free(color[i]);
	}
	return 0;
 } 

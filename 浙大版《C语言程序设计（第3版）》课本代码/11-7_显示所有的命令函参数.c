/*��ʾ���е������в���*/
#include<stdio.h>
int main(int argc,char*argv[])
{
	int k;
	for(k=1;k<argc;k++)/*�ӵ�һ�������в�����ʼ*/
		printf("%s ",argv[k]);/*��ӡ�����в���*/
	printf("\n");
	return 0; 
 } 

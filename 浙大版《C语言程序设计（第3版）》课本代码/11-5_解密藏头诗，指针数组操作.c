/*���ܲ�ͷʫ��ָ���������*/
#include<stdio.h>
int main(void)
{
	int i;
	char *poem[4]={"�Ұ����ճ���","��Ϊ��������","���������࣬","�����޶�ӯ��"};
	char mean[10];
	for(i=0;i<4;i++){/*ȡÿ�е�һ�����ִ���mean*/
	mean[2*i]=*(poem[i]);
	mean[2*i+1]=*(poem[i]+1);		
	}
	mean[2*i]='\0';
	printf("%s\n",mean);
	return 0;
 } 


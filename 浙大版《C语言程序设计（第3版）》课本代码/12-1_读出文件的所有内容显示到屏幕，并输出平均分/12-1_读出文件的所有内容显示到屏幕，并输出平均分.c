#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	FILE *fp;/*1.�����ļ�ָ��*/
	long num;
	char stname[20];
	int i,score;
	int avg_score=0;
	
	if((fp=fopen("C:\\12-1.txt","r"))==NULL)/*2.���ļ�*/
	{
		printf("File open erroe!\n");
		exit(0); 
	 } 
	 
	 for(i=0;i<4;i++){/*3.�ļ������������ʹ������ݣ�*/
	 	fscanf(fp,"%ld %s %d",&num,stname,&score);
	 	avg_score+=score;/*ͳ���ܷ�*/
	 	printf("%ld %s %d\n",num,stname,score);
	 }
	 printf("Average score:%d\n",avg_score/5);
	 if(fclose(fp)){/*4.�ر��ļ�*/
	 	printf("Can not close the file!\n");
	 	exit(0);
	 }
	 return 0;
}

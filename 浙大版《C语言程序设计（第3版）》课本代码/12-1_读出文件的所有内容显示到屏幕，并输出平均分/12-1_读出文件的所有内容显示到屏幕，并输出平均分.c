#include<stdio.h>
#include<stdlib.h>
int main (void)
{
	FILE *fp;/*1.定义文件指针*/
	long num;
	char stname[20];
	int i,score;
	int avg_score=0;
	
	if((fp=fopen("C:\\12-1.txt","r"))==NULL)/*2.打开文件*/
	{
		printf("File open erroe!\n");
		exit(0); 
	 } 
	 
	 for(i=0;i<4;i++){/*3.文件处理（逐个读入和处理数据）*/
	 	fscanf(fp,"%ld %s %d",&num,stname,&score);
	 	avg_score+=score;/*统计总分*/
	 	printf("%ld %s %d\n",num,stname,score);
	 }
	 printf("Average score:%d\n",avg_score/5);
	 if(fclose(fp)){/*4.关闭文件*/
	 	printf("Can not close the file!\n");
	 	exit(0);
	 }
	 return 0;
}

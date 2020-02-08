/*输入年份和天数，输出对应的年月日*/
/*使用指针作为函数参数返回多个函数值的实例*/ 
#include<stdio.h>
int month_day(int year,int yearday,int *pmonth,int *pday);
int main(void)
{
	int day,month,year,yearday;
	printf("Input year and yearday:"); 
	scanf("%d%d",&year,&yearday);
	month_day(year,yearday,&month,&day);
	printf("%d-%d-%d\n",year,month,day);
	return 0;
 } 

int month_day(int year,int yearday,int *pmonth,int *pday)
{
	int k,leap;
	int tab[2][13]={
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31},  
	};
	
	leap=(year%4==0&&year%100==0||year%400==0);
	
	for(k=1;yearday>tab[leap][k];k++)
		yearday-=tab[leap][k] ;
	*pmonth=k;
	*pday=yearday;
}

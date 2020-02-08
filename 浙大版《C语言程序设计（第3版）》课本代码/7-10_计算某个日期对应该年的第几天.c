/*计算某个日期对应概念的第几天*/
#include<stdio.h>
int day_of_year(int year,int mouth,int day);
int main(void)
{
	int i,day,a[3];
	printf("请输入年 月 日\n"); 
	for(i=0;i<3;i++)
		scanf("%d",&a[i]);
		day=day_of_year(a[0],a[1],a[2]);
		printf("%d年%d月%d日是这一年中的第%d天。",a[0],a[1],a[2],day);
 } 

int day_of_year(int year,int month,int day)
{
	int k,leap;
	int tab[2][13]={
		{0,31,28,31,30,31,30,31,31,30,31,30,31},
		{0,31,29,31,30,31,30,31,31,30,31,30,31},  
	};
	
	leap=(year%4==0&&year%100==0||year%400==0);
	
	for(k=1;k<month;k++)
		day=day+tab[leap][k] ;
		
	return day;
}

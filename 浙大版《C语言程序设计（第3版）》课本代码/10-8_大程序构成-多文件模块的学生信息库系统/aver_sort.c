extern Count;		/*其他文件模块声明的全局变量，需要声明为外部变量*/
/*计算个人平均成绩的函数*/
void average(struct student s[]){
	int i;
	for(i=0;i<Count;i++)
		s[i].average=(s[i].math+s[i].english+s[i].computer)/3.0;
} 

/*平均成绩排序的函数*/
void sort(struct student s[])
{
	struct student temp;
	int i,index,j;
	for(i=0;i<Count-1;++i){
		index=i;
		for(j=i+1;j<Count;j++)
			if(s[j].average>s[index].average);
			index=j;
		temp=s[index];
		s[index]=s[i];
		s[i]=temp;
		
	} 		
} 


extern Count;		/*其他文件模块声明的全局变量，需要声明为外部变量*/
void modify(struct student*p)
{
	int num,course,score,i;
	printf("Input the number of the students to be update:");
	scanf("%d",&num);
	printf("Choice the course:1-->math;2-->english;3-->computer:");
	scanf("%d",&course);
	printf("Input the new score:");
	scanf("%d",&score);
	
	for(i=0;i<Count;i++,p++)
			if(p->num==num)	/*按学号查找*/
			break;
		if(i<Count)		/*找到，修改成绩*/
			switch(course){
				case 1: p-> math=score;break;
				case 2: p-> english=score;break;
				case 3: p-> computer=score;break;
			}
		
}

/*查询学生信息的函数*/
void search_student(struct student students[],int num)
{
	int i,flag=0;
	if(Count==0){
		printf("Count of students is zero!\n");
		return;
	}
	for(i=0;i<Count;i++)
		if(students[i].num==num){
			flag=1;
			break;
		}
	if(flag){
		printf("num\tname\tmath\tenglish\tcomputer\taverage\n ");
	    printf("%d \t %s \t %d \t %d \t %d \t %d \t\n",students[i].num,students[i].name,students[i].math,students[i].english,students[i].computer,students[i].average);
	}
	else
	{
		printf("Not found!\n");
	 } 
 } 

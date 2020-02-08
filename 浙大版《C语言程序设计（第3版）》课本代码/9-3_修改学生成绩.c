/*修改学生成绩*/
/*输入n（n<50）个学生的成绩排名，在输入一个学生的学号、课程以及成绩，在自定义函数中修改该学生指定课程的成绩*/
#include<stdio.h>
struct student{
	int num;
	char name[10];
	int computer,english,math;
	double average;
}; 
int update_score(struct student *p,int n,int num,int course,int score); 
int main(void)
{
	int course,i,n,num,pos,score;
	struct student students[50];/*定义结构数组*/
	
	/*输入*/
	printf("Input n:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Input the info of No.%d:\n",i+1);
		printf("number:");
		scanf("%d",&students[i].num);
		printf("name:");
		scanf("%s",students[i].name);
		printf("computer score:");
		scanf("%d",&students[i].computer);
		printf("english score:");
		scanf("%d",&students[i].english);
		printf("math score:");
		scanf("%d",&students[i].math);
		students[i].average=(students[i].computer+students[i].english+students[i].math)/3.0;
		printf("\n");	
	}

	/*输入待修改学生信息*/
	printf("Input the number of the students to be update:");
	scanf("%d",&num);
	printf("Choice the course:1-->computer;2-->english;3-->math:");
	scanf("%d",&course);
	printf("Input the new score:");
	scanf("%d",&score);
	
	/*调用函数，修改学生成绩*/
	pos=update_score(students,n,num,course,score);
	
	/*输出修改后的学生成绩*/
	if(pos==-1)
		printf("Not found!\n");
	else
	{
		printf("after update:\n");
		printf("num\tcomputer\tenglish\tmath\n ");
		printf("%d \t %d \t %d \t %d\n",students[pos].num,students[pos].computer,students[pos].english,students[pos].math);
	 } 
	 return 0;
}

	/*自定义函数，修改学生成绩*/
	int update_score(struct student *p,int n,int num,int course,int score)
	{
		int i,pos;
		for(i=0;i<n;i++,p++)
			if(p->num==num)	/*按学号查找*/
			break;
		if(i<n)		/*找到，修改成绩*/
		{
			switch(course){
				case 1: p-> computer=score;break;
				case 2: p-> english=score;break;
				case 3: p-> math=score;break;
			}
			pos=i;/*被修改学生在数组中的下标*/
		}
		else 
			pos=-1;
			return pos; 
	}



/*�޸�ѧ���ɼ�*/
/*����n��n<50����ѧ���ĳɼ�������������һ��ѧ����ѧ�š��γ��Լ��ɼ������Զ��庯�����޸ĸ�ѧ��ָ���γ̵ĳɼ�*/
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
	struct student students[50];/*����ṹ����*/
	
	/*����*/
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

	/*������޸�ѧ����Ϣ*/
	printf("Input the number of the students to be update:");
	scanf("%d",&num);
	printf("Choice the course:1-->computer;2-->english;3-->math:");
	scanf("%d",&course);
	printf("Input the new score:");
	scanf("%d",&score);
	
	/*���ú������޸�ѧ���ɼ�*/
	pos=update_score(students,n,num,course,score);
	
	/*����޸ĺ��ѧ���ɼ�*/
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

	/*�Զ��庯�����޸�ѧ���ɼ�*/
	int update_score(struct student *p,int n,int num,int course,int score)
	{
		int i,pos;
		for(i=0;i<n;i++,p++)
			if(p->num==num)	/*��ѧ�Ų���*/
			break;
		if(i<n)		/*�ҵ����޸ĳɼ�*/
		{
			switch(course){
				case 1: p-> computer=score;break;
				case 2: p-> english=score;break;
				case 3: p-> math=score;break;
			}
			pos=i;/*���޸�ѧ���������е��±�*/
		}
		else 
			pos=-1;
			return pos; 
	}



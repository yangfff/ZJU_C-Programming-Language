/*ѧ���ɼ�����*/
/*����n��n<50����ѧ���ĳɼ�����������ѧ��ƽ���ɼ��Ӹߵ���������ǵ���Ϣ*/
#include<stdio.h>
struct student{
	int num;
	char name[10];
	int computer,english,math;
	double average;
}; 
int main(void)
{
	int i,index,j,n;
	struct student students[50],temp;/*����ṹ����*/
	
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
	
	/*�ṹ��������ѡ������*/
	for(i=0;i<n-1;i++){
		index=i;
		for(j=i+1;j<n;j++)
			if(students[j].average>students[i].average);
			index=j;
		temp=students[index];
		students[index]=students[i];
		students[i]=temp;
	} 
	
	/*�����������Ϣ*/
	printf("num \t name \t average \n");
	for(i=0;i<=n;i++)
		printf("%d\t%s\t%.2lf\n",students[i].num,students[i].name,students[i].average);
		
	return 0;
}

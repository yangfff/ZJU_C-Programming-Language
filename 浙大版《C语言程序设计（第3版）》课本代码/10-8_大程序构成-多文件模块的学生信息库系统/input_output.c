extern Count;		/*其他文件模块声明的全局变量，需要声明为外部变量*/

/*新建学生信息*/
void new_student(struct student students[])
{
	int i,n;
	if(Count==MaxSize){
		printf("The array is full!\n");
		return;
	}
	printf("Input the Number of Students:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Input the No.%d student's num:",i+1);
		scanf("%d",&students[i].num);
		printf("Input the No.%d student's name:",i+1);
		scanf("%s",students[i].name);
		printf("Input the No.%d student's math score:",i+1);
		scanf("%d",&students[i].math);
		printf("Input the No.%d student's english score:",i+1);
		scanf("%d",&students[i].english);
		printf("Input the No.%d student's computer score:",i+1);
		scanf("%d",&students[i].computer);
		Count++;
	}
 } 
 
 /*输出学生信息*/
 void output_student(struct student students[]) 
 {
 	int i;
 	if(Count==0){
 		printf("Count of students is zero!\n");
 		return;
	 }
	printf("num\tname\tmath\tenglish\tcomputer\taverage\n ");
	for(i=0;i<=Count;i++){
		printf("%d\t",students[i].num);
		printf("%s\t",students[i].name);
		printf("%d\t",students[i].math);
		printf("%d\t",students[i].english);
		printf("%d\t",students[i].computer);
		printf("%.2f\t\n",students[i].average);
	}
 }

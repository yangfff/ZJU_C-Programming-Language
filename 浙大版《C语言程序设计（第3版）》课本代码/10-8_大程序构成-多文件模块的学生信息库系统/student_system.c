#include "student.h"
#include "input_output.c"
#include "aver_sort.c"
#include "modify.c"
int Count=0;/*全局变量，记录当前学生总数*/
int main(void)
{
	struct student students[MaxSize];/*定义学生信息结构数组*/
	new_student(students);/*输入学生信息结构数组*/
	average(students);/*计算每个学生的平均成绩*/

	printf("显示输入的学生信息结构数组:\n");
	output_student(students);/*显示输入的学生信息结构数组*/
	sort(students);/*按学生的平均成绩排序*/
	
	printf("显示排序后的学生信息结构数组:\n");
	output_student(students);/*显示排序后的结构数组*/
	modify(students);/*修改指定输入的学生信息*/

	printf("显示修改后的学生信息结构数组:\n");
	output_student(students);/*显示修改后的结构数组*/
	return 0; 
 } 

#include "student.h"
#include "input_output.c"
#include "aver_sort.c"
#include "modify.c"
int Count=0;/*ȫ�ֱ�������¼��ǰѧ������*/
int main(void)
{
	struct student students[MaxSize];/*����ѧ����Ϣ�ṹ����*/
	new_student(students);/*����ѧ����Ϣ�ṹ����*/
	average(students);/*����ÿ��ѧ����ƽ���ɼ�*/

	printf("��ʾ�����ѧ����Ϣ�ṹ����:\n");
	output_student(students);/*��ʾ�����ѧ����Ϣ�ṹ����*/
	sort(students);/*��ѧ����ƽ���ɼ�����*/
	
	printf("��ʾ������ѧ����Ϣ�ṹ����:\n");
	output_student(students);/*��ʾ�����Ľṹ����*/
	modify(students);/*�޸�ָ�������ѧ����Ϣ*/

	printf("��ʾ�޸ĺ��ѧ����Ϣ�ṹ����:\n");
	output_student(students);/*��ʾ�޸ĺ�Ľṹ����*/
	return 0; 
 } 

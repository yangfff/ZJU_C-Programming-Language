/*Բ���������������1���������壻2������Բ���壻3������Բ׶��*/
#include<stdio.h>
#include<math.h>
#define PI 3.141592654
void cal (int sel);
double vol_ball(void);
double vol_cylind(void);
double vol_cone(void);

int main (void)
{
	int sel;
	
	/*ѭ��ѡ�����Բ����������ֱ�������1-3������Ϊֹ*/
	while(1){  /*����ѭ����ͨ��ѭ�����е�break������ѭ��*/
		printf(" 1-�����������"); 
		printf(" 2-����Բ�������"); 
		printf(" 3-����Բ׶�����"); 
		printf(" ����-�˳���������\n"); 
		printf("������������"); 
		scanf("%d",&sel);
		if(sel<1||sel>3)
			break;
		else
			cal(sel) ;
	} 
	return 0;
 }  
 
 /*���غ���*/
 void cal (int sel)
 {
 	switch(sel){
 		case 1:
 			printf("�������Ϊ��%.2f\n",vol_ball());
 			break;
 		case 2:
 			printf("Բ�������Ϊ��%.2f\n",vol_cylind());
 			break;
 		case 3:
 			printf("Բ׶���Ϊ��%.2f\n",vol_cone());
 			break;
    }
 }
 
 double vol_ball(void)
{
	double r;
	printf("����������İ뾶��");
	scanf("%lf",&r);
	return(4.0/3.0*PI*r*r*r);
 } 
 
  double vol_cylind(void)
{
	double h,r;
	printf("������Բ����ĵ�Բ�뾶�͸ߣ�");
	scanf("%lf%lf",&r,&h);
	return(PI*r*r*h);
 } 
 
   double vol_cone(void)
{
	double h,r;
	printf("������Բ׶��ĵ�Բ�뾶�͸ߣ�");
	scanf("%lf%lf",&r,&h);
	return(PI*r*r*h/3.0);
 } 
 


/*�ֱ�����2��������ʵ�����鲿���ú���ʵ�ּ���2������֮�����*/
#include<stdio.h>
float result_real,result_imag;
void complex_prod(float real1,float imag1,float real2,float imag2);
void complex_add(float real1,float imag1,float real2,float imag2);

int main(void)
{
	float real1,imag1,real2,imag2;
	
	printf("�������һ��������ʵ�����鲿���֣�");
	scanf("%f%f",&real1,&imag1);
	printf("������ڶ���������ʵ�����鲿���֣�");
	scanf("%f%f",&real2,&imag2);
	complex_add(real1,imag1,real2,imag2);
	printf("�������֮�ͣ�%f+%fi\n",result_real,result_imag); 
	complex_prod(real1,imag1,real2,imag2);
	printf("�������֮�ͣ�%f+%fi\n",result_real,result_imag); 
	
	return 0;  
}

void complex_add(float real1,float imag1,float real2,float imag2)
{
	result_real=real1+real2;
	result_imag=imag1+imag2;
}

void complex_prod(float real1,float imag1,float real2,float imag2)
{
	result_real=real1*real2-imag1*imag2;
	result_imag=real1*real2+imag1*imag2;
}

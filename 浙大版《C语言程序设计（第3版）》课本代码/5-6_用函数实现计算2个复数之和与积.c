/*分别输入2个复数的实部与虚部，用函数实现计算2个复数之和与积*/
#include<stdio.h>
float result_real,result_imag;
void complex_prod(float real1,float imag1,float real2,float imag2);
void complex_add(float real1,float imag1,float real2,float imag2);

int main(void)
{
	float real1,imag1,real2,imag2;
	
	printf("请输入第一个复数的实部与虚部数字：");
	scanf("%f%f",&real1,&imag1);
	printf("请输入第二个复数的实部与虚部数字：");
	scanf("%f%f",&real2,&imag2);
	complex_add(real1,imag1,real2,imag2);
	printf("复数相加之和：%f+%fi\n",result_real,result_imag); 
	complex_prod(real1,imag1,real2,imag2);
	printf("复数相加之和：%f+%fi\n",result_real,result_imag); 
	
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

/*2-11���ú�������׳�*/

#include <stdio.h>

double factorial (int n); //�������� 


int main (void){

	int n;

	printf("������������׳˵����֣�"); 
	scanf ("%d",&n);
	
	printf("������ֵĽ׳�Ϊ��%.0f\n",factorial(n));//ע�������� �������������������� 
	
	//������ʣ����ֻ���롰���������Ļ���printf�Ľ���ʲô�أ�
	
	}

double factorial (int n){

	int i;
	double fact = 1;

	for (i=1; i<=n; i++){
		fact = fact * i ;
	}
		

	return fact;
}


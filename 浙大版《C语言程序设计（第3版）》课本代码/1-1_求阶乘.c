/*��׳�����*/

#include <stdio.h>

int factorial (int n); //�������� 


int main (void){

	int n;

	printf("������������׳˵����֣�"); 
	scanf ("%d",&n);
	
	printf("������ֵĽ׳�Ϊ��%d\n",factorial(n));//ע�������� �������������������� 
	
	//������ʣ����ֻ���롰���������Ļ���printf�Ľ���ʲô�أ�
	
	}

int factorial (int n){

	int i, fact = 1;

	for (i=1; i<=n; i++){
		fact = fact * i ;
	}
		

	return fact;
}


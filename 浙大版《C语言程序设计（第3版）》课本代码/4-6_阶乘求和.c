/*��׳˺�����*/

#include <stdio.h>

int main (void){

	int i,n;
	double sum,product;

	printf("������������׳˵����֣�"); 
	scanf ("%d",&n);
	
	sum = 0;
	product=1;
	for(i=1;i<=n;i++){
		product = product*i;
		sum = sum + product;
	} 
	printf("������ֵĽ׳�Ϊ��%.0f\n",product);
	printf("��1�������ֵĽ׳˺�Ϊ��%.0f",sum);
	
	
	return 0;
}


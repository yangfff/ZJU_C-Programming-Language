/*��׳�����*/

#include <stdio.h>

int main (void){

	int i,n;
	double product;

	printf("������������׳˵����֣�"); 
	scanf ("%d",&n);
	
	product=1;
	for(i=1;i<=n;i++){
		product = product*i;
	} 
	printf("������ֵĽ׳�Ϊ��%.0f",product);
	return 0;
}


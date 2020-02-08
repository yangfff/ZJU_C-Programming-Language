/*判断字符串是否为回文*/
#include<stdio.h>
int main(void){
	int i,k;
	char line[80];

	printf("Enter a string:");
	k=0;
	while((line[k]=getchar())!='\n')
		k++;
	line[k]='\0';
	
	i=0;
	k=k-1;
	while(i<k){
		if(line[i]!=line[k])
			break;
		i++;
		k--; 
	}
	if(i>=k)
		printf("It is a palindrome.\n");
	else
		printf("It is not a palindrome.\n");
		
	return 0;
} 


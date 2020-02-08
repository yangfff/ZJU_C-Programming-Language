#include <stdio.h>
int main(void)
{
	int digit,letter,other,block,enter,n;
	char ch;
	int i;
	digit = letter = other = block =enter = 0;
	printf("Enter 10 characters:");
	for(i=1;i<=10;i++){
		ch = getchar();
		if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
			letter++;
		else if(ch>='0'&&ch<='9')
			digit++;
		else if(ch==' ')        //或者ch==32 
			block++;
		else if(ch=='\n')		//或者ch==13
			enter++;
		else 
			other++;
	}
	
	printf("letter=%d,digit=%d,other=%d,block=%d,enter=%d",letter,digit,other,block,enter);
	return 0;
}


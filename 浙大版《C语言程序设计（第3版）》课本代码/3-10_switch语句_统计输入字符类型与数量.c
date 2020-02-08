#include <stdio.h>
int main(void)
{
	int digit,other,block,enter;
	char ch;
	int i;
	digit = other = block =enter = 0;
	printf("Enter 10 characters:");
	for(i=1;i<=10;i++){
		ch = getchar();
		switch (ch){
			case ' ':
				enter++;
				break;
			case '\n':
				block++;
				break;
			case '0':case '1':case '2':case '3':case '4':case '5':case '6':case '7':case '8':case '9':
				digit++;
				break;
				default:
					other++;
					break;
		}
	}
	
	printf("digit=%d,other=%d,block=%d,enter=%d",digit,other,block,enter);
	return 0;
}


/*用函数实现财务现金记账*/
#include<stdio.h>

float cash;
void income(float number),expend(float number);

int main(void)
{
	int choice;
	float value;
	
	cash=0;
	printf("Enter operate choice(o--end,1--income,--expand):");
	scanf("%d",&choice);
	while(choice!=0){
		if(choice==1||choice==2){
			scanf("%f",&value);
			if(choice==1)
				income(value);
			else
				expend(value);
			printf("current cash:%.2f\n",cash);
		}
		printf("Enter operate choice(o--end,1--income,--expand):");
		scanf("%d",&choice);
	}
	return 0;	
}

void income(float number)
{
	cash=cash+number;
}
void expend(float number)
{
	cash=cash-number;
}

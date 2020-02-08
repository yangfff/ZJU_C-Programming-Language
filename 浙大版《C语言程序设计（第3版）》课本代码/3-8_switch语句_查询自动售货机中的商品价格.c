/*3-8_switch语句-查询自动售货机中的商品价格*/
#include<stdio.h>
int main(void)
{
	int choice,i;
	double price;
	
	for(i=1;i<=5;i++){
		printf("查询自动售货机中的商品价格\n");
		printf("[1]薯片\n");
		printf("[2]爆米花\n");
		printf("[3]薯片\n");
		printf("[4]可乐\n");
		printf("[0]退出查询\n");
		
		printf("请选择序号：");
		scanf("%d",&choice);
		
		if(choice==0)
			break;
		switch (choice){
			case 1:price=3.0;break;
			case 2:price=5.0;break;
			case 3:price=4.0;break;
			case 4:price=3.5;break;
			default:price=0.0;break;
		}
		 printf("价格是%0.1f元",price);
	}
	printf("谢谢！\n");
	return 0;
 } 

/*3-8_switch���-��ѯ�Զ��ۻ����е���Ʒ�۸�*/
#include<stdio.h>
int main(void)
{
	int choice,i;
	double price;
	
	for(i=1;i<=5;i++){
		printf("��ѯ�Զ��ۻ����е���Ʒ�۸�\n");
		printf("[1]��Ƭ\n");
		printf("[2]���׻�\n");
		printf("[3]��Ƭ\n");
		printf("[4]����\n");
		printf("[0]�˳���ѯ\n");
		
		printf("��ѡ����ţ�");
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
		 printf("�۸���%0.1fԪ",price);
	}
	printf("лл��\n");
	return 0;
 } 

### 问题描述：switch语句-查询自动售货机中的商品价格

### 源代码： 
     
	/*switch语句-查询自动售货机中的商品价格*/
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
			printf("[5]退出查询\n");
			
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


### 运行结果：
![售货机查询价格](https://upload-images.jianshu.io/upload_images/6770220-a69c755a4571f902.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)


###程序参数：

- 输出大小: 150.0498046875 KiB
- 编译时间: 0.36s

### 问题解决：
[Error] ld returned 1 exit status

错误原因是因为上一个运行窗口未关。
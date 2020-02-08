### 问题描述：do-while统计一个整数的位数
### 源代码： 
	/*do-while统计一个整数的位数*/
	#include<stdio.h>
	int main(void)
	{
		int count,number;
		
		count = 0;
		printf("Enter a number:");
		scanf("%d",&number);
		if(number<0) number = -number;
		
		do{
			number=number/10;
			count++;
		}while(number!=0);
		
		printf("It contain %d digits.\n",count);
		
		return 0;
	}

### 运行结果：
![统计一个整数的位数](https://upload-images.jianshu.io/upload_images/6770220-42658cf3a002fcda.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)


###程序参数：
- 输出大小: 148.3701171875 KiB
- 编译时间: 0.30s

### 问题描述：分类统计问题：电视台调查1-8号栏目观众的支持情况，现要求对现场1000名观众进行调查，统计输出栏目的得票数

### 源代码：
	/*分类统计问题：电视台调查1-8号栏目观众的支持情况，现要求对现场1000名观众进行调查，统计输出栏目的得票数*/
	
	#include<stdio.h>
	int main(void)
	{
		int i,response;
		int count[9];
		for(i=1;i<=8;i++)
			count[i]=0;
		for(i=1;i<=10;i++){
			printf("Enter your response:");
			scanf("%d",&response);
			if(response>=1&&response<=8)
				count[response]++;
			else 
				printf("invalid:%d\n",response);
		}
		printf("result:\n");
		for(i=1;i<=8;i++)
			printf("%4d%4d\n",i,count[i]);
			
		return 0;
	 } 
### 运行结果：
![分类统计问题](https://upload-images.jianshu.io/upload_images/6770220-d1f5c1ac6f71be4a.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

### 程序参数：
- 输出大小: 149.52734375 KiB
- 编译时间: 0.30s

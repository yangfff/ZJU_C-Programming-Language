### 问题描述：汉诺（Hanoi）塔问题-递归实现

### 源代码：
	/*汉诺（Hanoi）塔问题-递归实现*/
	#include<stdio.h>
	void hanoi(int n,char a,char b,char c);
	int main(void)
	{
		int n;
		
		printf("input the number of disk:");
		scanf("%d",&n);
		printf("the steps for %d disk:\n",n);
		hanoi(n,'a','b','c');
		
		return 0;
	 } 
	 
	 /*搬动n个盘，从a到b,c为中间过渡*/
	void hanoi(int n,char a,char b,char c)
	{
		if(n==1)
			printf("%c-->%c\n",a,b);
		else{
			hanoi(n-1,a,c,b);
			printf("%c-->%c\n",a,b);
			hanoi(n-1,c,b,a);
		}
	}
### 运行结果：
![汉诺（Hanoi）塔问题-递归实现](https://upload-images.jianshu.io/upload_images/6770220-94ab843d0be7242e.png?imageMogr2/auto-orient/strip%7CimageView2/2/w/1240)

### 程序算法：
	
	hanio(n个盘，A->B)
	{
		if(n==1)
		直接把盘子A->B;
		else{
			hanio(n-1个盘，A->C）;
			把n号盘子A->B;
			hanio(n-1个盘，C->B);
		}
	}

### 程序参数：
- 输出大小: 149.390625 KiB
- 编译时间: 0.31s

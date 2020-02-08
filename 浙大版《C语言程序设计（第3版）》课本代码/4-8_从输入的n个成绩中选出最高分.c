/*从输入的n个成绩中选出最高分，用for语句实现*/

/*#include <stdio.h>
int main(void)
{
	int i,mark,max,n;
	
	printf("Enter n:");
	scanf("%d",&n);
	printf("Enter %d marks:",n);
	scanf("%d",&mark);
	max=mark;
	for(i=1;i<n;i++){
		scanf("%d",&mark);
		if(max<mark)
			max=mark;
	}
	printf("Max=%d\n",max);
	return 0;
}
*/
 
/*从一批负数结尾的n个成绩中选出最高分，用while语句实现*/
#include <stdio.h>
int main(void)
{
	int mark,max;
	
	printf("Enter marks:");
	scanf("%d",&mark);
	max=mark;
	while(mark>=0){
		if(max<mark)
			max=mark;
		scanf("%d",&mark);
	} 
	
	printf("Max=%d\n",max);
	return 0;
}


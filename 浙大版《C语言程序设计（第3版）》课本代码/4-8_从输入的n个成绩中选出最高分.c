/*�������n���ɼ���ѡ����߷֣���for���ʵ��*/

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
 
/*��һ��������β��n���ɼ���ѡ����߷֣���while���ʵ��*/
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


/*方阵转置*/
#include<stdio.h>
int main(void)
{
	int i,j,n,temp;
	int a[6][6];
	
	/*给二位数组赋值*/
	printf("Enter n:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			a[i][j]=i*n+j+1;  
			
	/*行列互换*/			
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			if(i<=j){
				temp=a[i][j]; //只遍历上三角阵 
				a[i][j]=a[j][i];
				a[j][i]=temp;
			}
	}
	
	/*矩阵输出a*/
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			printf("%4d",a[i][j]);
		printf("\n");
	}
	
	return 0;
}

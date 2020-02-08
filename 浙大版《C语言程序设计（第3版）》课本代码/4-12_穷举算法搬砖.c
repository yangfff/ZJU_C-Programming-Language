/*穷举算法：男人一次搬砖3块，女人一次搬砖2块，两个小孩一起搬砖1块，有多少种搬法满足45人搬砖45块*/

#include<stdio.h>
int main(void)
{
	int child,men,women;
	for(men=0;men<=15;men++)
		for(women=0;women<=22;women++){
			child=45-women-men;
			if(men*3+women*2+child*0.5==45)
				printf("men=%d,women=%d,chile=%d\n",men,women,child);
		}
	return 0;
 } 

/*����㷨������һ�ΰ�ש3�飬Ů��һ�ΰ�ש2�飬����С��һ���ש1�飬�ж����ְᷨ����45�˰�ש45��*/

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

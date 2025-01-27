#include<stdio.h>

extern int iNo;

int main(void)
{
	
	extern float fNo; 
	
	printf("%d\n",fNo); //0
	
	return 0;
}
float fNo;
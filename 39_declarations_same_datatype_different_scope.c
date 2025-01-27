#include<stdio.h>

extern int iNo;

int main(void)
{
	
	extern int iNo; //Allowed
	
	printf("%d\n",iNo); //0
	
	return 0;
}
int iNo=10;
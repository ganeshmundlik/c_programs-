#include<stdio.h>

void Fun();

int main(void)
{
	
	extern int g_iNo;
	
	printf("In main %d\n",g_iNo);//In main=10
	
	Fun();
	
	return 0;
	
}


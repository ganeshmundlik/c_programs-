#include<stdio.h>

static int g_iNo=20; 
void Fun();

int main(void)
{
	
	extern int g_iNo;
	
	printf("In main %d\n",g_iNo);//In main 20
	
	Fun();
	
	return 0;
	
}



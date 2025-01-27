#include<stdio.h>

void Fun();

int main(void)
{
	
	extern int g_iNo;
	
	printf("In main %d\n",g_iNo);
	
	Fun();
	
	return 0;
	
}
int g_iNo=20; //g_iNo already defined in 44_external_linkage_fun
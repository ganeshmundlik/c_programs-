#include<stdio.h>

void Fun();

int main(void)
{
	
	extern int g_iNo;
	
	printf("In main %d\n",g_iNo);
	
	Fun();
	
	return 0;
	
}
static int g_iNo=20; 
//error LNK2019: unresolved external symbol _Fun referenced in function _main
//error LNK2019: unresolved external symbol _g_iNo referenced in function _main
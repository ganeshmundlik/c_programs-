#include<stdio.h>

int main(void)
{
	
	extern int iNo;
	extern int iNo; //Allowed
	
	printf("%d\n",iNo); //0
	
	return 0;
}
int iNo;

           	   
	    
		  
#include<stdio.h>

void Fun(int *);

int main(void)
{
	int iNo=10;
	
	printf("Before calling Fun %d\n",iNo);       // Before calling Fun 10
	
	Fun(&iNo);//call by address
	
	printf("after calling Fun %d",iNo);          // after calling Fun 11
	
	return 0;
}

void Fun(int *pPter)
{
	printf("In Fun() %d\n",*pPter);		   // In Fun() 10
	
	(*pPter)++;
	
	printf("Leaving Fun() %d\n",*pPter);	   // Leaving Fun() 11
}





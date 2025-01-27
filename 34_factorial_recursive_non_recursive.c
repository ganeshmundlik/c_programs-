#include<stdio.h>

int FactorialRecursive(int iNo);
int FactorialNonRecursive(int iNo);

int main(void)
{
	int iNo;
	int iAns;
	
	printf("Enter Number :");
	scanf("%d",&iNo);//5
	
	iAns=FactorialRecursive(iNo);
	printf("Factorial of recursive %d is %d\n",iNo,iAns);//Factorial of recursive 5 is 120

	
	iAns=FactorialNonRecursive(iNo);
	printf("Factorial of non recursive %d is %d",iNo,iAns);//Factorial of non recursive 5 is 120
	
	return 0;
	
	
}
int FactorialRecursive(int iNo)
{
	if(iNo==1)  
		return 1; 
	
	return iNo*FactorialRecursive(iNo-1);   
	
}
int FactorialNonRecursive(int iNo)
{
	int iAns;
	int iCounter;
	
	for(iCounter=iNo-1,iAns=iNo;iCounter!=1;iCounter--)
	 iAns=iAns*iCounter;
    
	return iAns;
	
}
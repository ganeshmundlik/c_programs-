#include<stdio.h>


int main(void)
{
    int iNo=10;

    int *pPtr=&iNo;

    printf("++iNo is : %d\n",++iNo);         //++iNo is : 11
    printf("++(*pPtr) is : %d\n",++(*pPtr)); //++(*pPtr) is : 12
    printf("++(*pPtr) is : %d",++(*pPtr));   //++(*pPtr) is : 13
	
    return 0;
}


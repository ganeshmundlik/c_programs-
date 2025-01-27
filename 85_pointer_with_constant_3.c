#include<stdio.h>


int main(void)
{
    const int iNo=10;
    const int *pPtr=&iNo;

    //printf("++iNo is : %d\n",++iNo);         //error C2166: l-value specifies const object
    //printf("++(*pPtr) is : %d",++(*pPtr));   //error C2166: l-value specifies const object
    printf("++pPtr is : %d",++pPtr);        //++(*pPtr) is : 19921140
	
    return 0;
}



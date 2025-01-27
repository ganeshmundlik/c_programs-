#include<stdio.h>


int main(void)
{
    int iNo=10;

    const int *pPtr=&iNo;

    printf("++iNo is : %d\n",++iNo);           //++iNo is : 11
    //printf("++(*pPtr) is : %d",++(*pPtr));  //error C2166: l-value specifies const object
    printf("++pPtr is : %d",++pPtr);         //++pPtr is : 1637668
   
    return 0;
}


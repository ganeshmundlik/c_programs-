#include<stdio.h>


int main(void)
{
    const int iNo=10;
    int *pPtr=&iNo;                             // warning C4090: 'initializing' : different 'const' qualifiers

    //printf("++iNo is : %d\n",++iNo);        //error C2166: l-value specifies const object
    printf("++(*pPtr) is : %d\n",++(*pPtr)); //++(*pPtr) is : 11
    printf("++pPtr is : %d",++pPtr);        //++pPtr is : 17955188

    return 0;
}

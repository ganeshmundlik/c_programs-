#include<stdio.h>

int main(void)
{
    float arr[5]={1.1f,1.2f,1.3f,1.4f,1.5f};

    float *pPtr=&arr[4];

    printf("pPtr :%d\n",pPtr);                 //pPtr :7797244
    printf("*pPtr :%f\n",*pPtr);               //*pPtr :1.500000

    printf("pPtr-3 :%d\n",pPtr-3);             //pPtr-3 :7797232
    printf("*(pPtr-3) :%f\n",*(pPtr-3));       //*(pPtr-3) :1.200000

    //printf("3-pPtr :%d\n",3-pPtr);           //error C2113: '-' : pointer can only be subtracted from another pointer
    //printf("*(3-pPtr) :%f\n",*(3-pPtr));    //error C2113: '-' : pointer can only be subtracted from another pointer

    printf("pPtr :%d\n",pPtr);                //pPtr :7797244
    printf("*pPtr :%f\n",*pPtr);              //*pPtr :1.500000

    return 0;
}








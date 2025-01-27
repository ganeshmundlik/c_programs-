#include<stdio.h>

int main(void)
{
    int arr[]={'A','B','C','D','E'};
    char *pPtr=&arr[4];      // warning C4133: 'initializing' : incompatible types - from 'int *' to 'char *'
	
    printf("Before decrement pPtr :%d\n",pPtr);    //Before decrement pPtr :15727560
    printf("Before decrement *pPtr :%c\n",*pPtr); //Before decrement *pPtr :E

    printf("Decrement pPtr :%d\n",pPtr--);       //Decrement pPtr :15727560

    printf("After decrement pPtr :%d\n",pPtr);   //After decrement pPtr :15727559
    printf("After decrement *pPtr :%c",*pPtr); //After decrement *pPtr :

    return 0;
}









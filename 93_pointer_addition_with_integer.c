#include<stdio.h>

int main(void)
{
    double arr[]={1000.5,2000.5,3000.5,4000.5,5000.5};
    double *pPtr=&arr[0];                                 

    printf("pPtr :%d\n",pPtr);             //pPtr :9435012
    printf("*pPtr :%lf\n",*pPtr);         //*pPtr :1000.500000

    printf("pPtr+3 :%d\n",pPtr+3);        //pPtr+3 :9435036
	printf("3+pPtr :%d\n",3+pPtr);        //3+pPtr :9435036
   
  
    printf("pPtr :%d\n",pPtr);        //pPtr :9435012
    printf("*pPtr :%lf\n",*pPtr);    //*pPtr :1000.500000
	
	printf("*(pPtr+3) :%lf\n",*(pPtr+3)); //*(pPtr+3) :4000.500000
    printf("*(3+pPtr) :%lf\n",*(3+pPtr)); //*(3+pPtr) :4000.500000
  
    return 0;
}









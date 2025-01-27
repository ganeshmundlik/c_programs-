#include<stdio.h>

int main(void)
{
    int arr[]={10,20,30,40,50};

    int *pPtr=&arr[0];

    printf("Before increment &pPtr :%d\n",&pPtr); //Before increment &pPtr :11992592    
	
    printf("Before increment *pPtr :%d\n",*pPtr);//Before increment *pPtr :10   

    printf("Increment pPtr++ :%d",pPtr++);       //Increment pPtr++ :11992568

    printf("After increment &pPtr :%d\n",&pPtr); //After increment &pPtr :11992592

    printf("After increment *pPtr :%d\n",*pPtr); //After increment *pPtr :20
	
	printf("increment pPtr++ :%d\n",pPtr++);   //increment pPtr++ :11992572

    return 0;
}











#include<stdio.h>

int main(void)
{
    int arr[]={10,20,30,40,50};
	
    int *pPtr1=&arr[0]; 
    int *pPtr2=&arr[4];                             

    printf("pPtr1 :%d\n",pPtr1);     //pPtr1 :5504096  
    printf("pPtr2 :%d\n",pPtr2);    //pPtr2 :5504112

    //printf("pPtr1+pPtr2 =%d",pPtr1+pPtr2); //error C2110: '+' : cannot add two pointers
	
    return 0;
}
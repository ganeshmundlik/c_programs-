#include<stdio.h>

int main(void)
{
    int arr[5]={10,20,30,40,50};

    int *pPtr1=&arr[0];
	
    int *pPtr2 = &arr[4];

    printf("pPtr1 :%d\n",pPtr1);                 //pPtr1 :15727036
    printf("pPtr2 :%d\n",pPtr2);                 //pPtr2 :15727052

    printf("pPtr1-pPtr2 :%d\n",pPtr1-pPtr2);    //pPtr1-pPtr2 :-4
    printf("pPtr2-pPtr1 :%d\n",pPtr2-pPtr1);    //pPtr2-pPtr1 :4

    return 0;
}







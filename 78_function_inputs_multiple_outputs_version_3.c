#include<stdio.h>

void AddSub(int*,int*);

int main(void)
{
    int iNo1;
    int iNo2;
 
    printf("Enter First Number:\t");//Enter First Number:     20
    scanf("%d",&iNo1);

    printf("Enter Second  Number:\t");//Enter Second Number:     10
    scanf("%d",&iNo2);

    AddSub(&iNo1,&iNo2);

    printf("Addition is :%d\t\n",iNo1);//Addition is :30
    printf("Subtration is :%d\t",iNo2);//Subtration is :10

    return 0;
}

void AddSub(int *pPtr1,int *pPtr2)
{
    int iTemp;
    iTemp=*pPtr1;
    *pPtr1=*pPtr1+*pPtr2;
    *pPtr2=iTemp-*pPtr2;
}






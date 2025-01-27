#include<stdio.h>

void AddSub(int,int,int*,int*);

int main(void)
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter First Number :\t");  //Enter First Number :    20
    scanf("%d",&iNo1);

    printf("Enter Second Number :\t"); //Enter Second Number :    10
    scanf("%d",&iNo2);

    AddSub(iNo1,iNo2,&iSum,&iDiff);

    printf("Addition is :%d\t\n",iSum);  //Addition is :   30
    printf("Subtration is :%d\n",iDiff); //Subtration is :   10

    return 0;
}

void AddSub(int iNo1,int iNo2,int* piSum,int* piDiff)
{
    *piSum=iNo1+iNo2;
    *piDiff=iNo1-iNo2;
}
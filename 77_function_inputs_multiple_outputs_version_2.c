#include<stdio.h>

int AddSub(int,int,int*);

int main(void)
{
    int iNo1;
    int iNo2;
    int iSum;
    int iDiff;

    printf("Enter First Number :\t");//Enter First Number :    20
    scanf("%d",&iNo1);

    printf("Enter Second Number :\t");//Enter First Number :    10
    scanf("%d",&iNo2);

    iSum=AddSub(iNo1,iNo2,&iDiff);

    printf("Addition is :%d\t\n",iSum);//Addition is :    30
    printf("Subtration is :%d\t",iDiff);//Subtration is :    10

    return 0;
}

int AddSub(int iNo1,int iNo2,int* piDiff)
{
    
    *piDiff=iNo1-iNo2;
    return iNo1+iNo2;
}

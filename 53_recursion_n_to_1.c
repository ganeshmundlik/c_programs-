#include<stdio.h>

void PrintNumbers(int);

int main(void)
{
    int iNo;
	
    printf("Enter Number :");//Enter Number :
    scanf("%d",&iNo); //10

    PrintNumbers(iNo);

    return 0;
}
void PrintNumbers(int iNo)
{
    if(iNo==0)
        return;

    printf("%d\t",iNo); //10      9       8       7       6       5       4       3       2       1
    PrintNumbers(iNo-1);
}
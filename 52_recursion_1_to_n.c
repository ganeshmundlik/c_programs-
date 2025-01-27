#include<stdio.h>

void PrintNumbers(int);

int main(void)
{
    int iNo;
	
    printf("Enter Number :");//Enter Number :10
    scanf("%d",&iNo);

    PrintNumbers(iNo);

    return 0;
}
void PrintNumbers(int iNo)
{
    if(iNo==0)
        return;

    PrintNumbers(iNo-1);
	
    printf("%d\t",iNo);  //1       2       3       4       5       6       7       8       9       10
}
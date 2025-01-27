#include<stdio.h>

#define MAX 3

int main(void)
{

    int arr[3];
    int iCounter;

    for(iCounter=0;iCounter < MAX;iCounter++)
    {
        printf("Enter number %d :",iCounter+1); 
        scanf("%d",&arr[iCounter]);
    }

    for(iCounter=0;iCounter<MAX;iCounter++)
        printf("Number %d is : %d\n",iCounter+1,arr[iCounter]);


    return 0;
}

/*
output : 

Enter number 1 : 5
Enter number 2 : 10
Enter number 3 : 15
Number 1 is : 5
Number 2 is : 10
Number 3 is : 15

*/
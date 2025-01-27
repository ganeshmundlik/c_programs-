#include<stdio.h>

#define MAX 10
#define EQUAL 1
#define NOT_EQUAL 0

int CompareArray(int [],int [],int);

int main(void)
{
	int iResult;
	int iCounter;
	int iElementCount1;
	int iElementCount2;
	
	int arr1[MAX];
	int arr2[MAX];
	
	printf("How many elements you want to enter in arr1?(<%d):\t",MAX);//How many elements you want to enter in arr1?(<10):      2
	scanf("%d",&iElementCount1);
	printf("How many elements you want to enter in arr2?(<%d):\t",MAX);//How many elements you want to enter in arr2?(<10):      2
	scanf("%d",&iElementCount2);
	
	if(iElementCount1 != iElementCount2)
	{
		printf("Array values will not be equal\n");
		return 0;
	}
	
	for(iCounter=0; iCounter<iElementCount1; iCounter++)
	{
		printf("Enter arr1[%d] value:\t",iCounter);  //Enter arr1[0] value:    10
                                                     //Enter arr1[1] value:    20
		scanf("%d",&arr1[iCounter]);
	}
	
	printf("\n");
	for(iCounter=0; iCounter<iElementCount2; iCounter++)
	{
		printf("Enter arr2[%d] value:\t",iCounter);   //Enter arr2[0] value:    10
                                                      //Enter arr2[1] value:    20
		
		scanf("%d",&arr2[iCounter]);
	}
	
	printf("\narr1 values are,\n");  //arr1 values are,

	for(iCounter=0; iCounter<iElementCount1; iCounter++)
		printf("arr1[%d]=%d\n",iCounter,arr1[iCounter]);  //arr1[0]=10
                                                          //arr1[1]=20
	
	printf("\narr2 values are,\n"); //arr2 values are,
	for(iCounter=0; iCounter<iElementCount2; iCounter++)
		printf("arr1[%d]=%d\n",iCounter,arr2[iCounter]);
	                                                   //arr1[0]=10
                                                       //arr1[1]=20
	
	iResult = CompareArray(arr1,arr2,iElementCount1);
	
	if(EQUAL==iResult)
		printf("Array are equal");//Array are equal
	else
		printf("Array are not equal");
	
	return 0;
}


int CompareArray(int arr1[],int arr2[],int iElementCount)
{
	int iCounter;
	for(iCounter=0; iCounter<iElementCount; iCounter++)
	{
		if(arr1[iCounter] != arr2[iCounter])
			return NOT_EQUAL;
	}
	
	return EQUAL;
}


/*

How many elements you want to enter in arr1?(<10):      2
How many elements you want to enter in arr2?(<10):      2
Enter arr1[0] value:    10
Enter arr1[1] value:    20

Enter arr2[0] value:    10
Enter arr2[1] value:    20

arr1 values are,
arr1[0]=10
arr1[1]=20

arr2 values are,
arr1[0]=10
arr1[1]=20
Array are equal

*/
#include<stdio.h>

#define MAX 10

void AssignArrays(int [],int [],int);

int main(void)
{
	int iCounter;
	int iElementCount;

	int arr1[MAX];
	int arr2[MAX];

	printf("How many elements you want to enter in arr1?(<%d):\t",MAX);
	scanf("%d",&iElementCount);

	printf("Enter arr1 values:\n");
	for(iCounter=0; iCounter < iElementCount; iCounter++)
	{
		printf("Enter arr1[%d]value:\t",iCounter);
		scanf("%d",&arr1[iCounter]);
	}

	printf("arr1 values are,\n");

	for(iCounter=0; iCounter < iElementCount; iCounter++)
		printf("arr1[%d]=%d\n",iCounter,arr1[iCounter]);
	
	printf("arr2 values are,\n");

	for(iCounter=0; iCounter < iElementCount; iCounter++)
		printf("arr2[%d]=%d\n",iCounter,arr2[iCounter]);

	AssignArrays(arr1,arr2,iElementCount);

	printf("arr1 values are,\n");

	for(iCounter=0; iCounter < iElementCount; iCounter++)
		printf("arr1[%d]=%d\n",iCounter,arr1[iCounter]);

	printf("arr2 values are,\n");
	iCounter=0;
	for(iCounter=0; iCounter < iElementCount; iCounter++)
		printf("arr2[%d]=%d\n",iCounter,arr2[iCounter]);
	
	return 0;
}

void AssignArrays(int arr1[],int arr2[],int iElementCount)
{
	int iCounter;

	for(iCounter=0; iCounter < iElementCount; iCounter++)
		arr2[iCounter]=arr1[iCounter];
}

//output:
/*How many elements you want to enter in arr1?(<10):      5
Enter arr1 values:
Enter arr1[0]value:     1
Enter arr1[1]value:     2
Enter arr1[2]value:     3
Enter arr1[3]value:     4
Enter arr1[4]value:     5
arr1 values are,
arr1[0]=1
arr1[1]=2
arr1[2]=3
arr1[3]=4
arr1[4]=5
arr2 values are,
arr2[0]=-1286519168
arr2[1]=32758
arr2[2]=0
arr2[3]=0
arr2[4]=-1286521150
arr1 values are,
arr1[0]=1
arr1[1]=2
arr1[2]=3
arr1[3]=4
arr1[4]=5
arr2 values are,
arr2[0]=1
arr2[1]=2
arr2[2]=3
arr2[3]=4
arr2[4]=5
*/
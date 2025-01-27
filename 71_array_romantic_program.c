#include<stdio.h>

int main(void)
{
	int arr[5]={10,20,30,40,50};
	
	printf("Address of 1D array is %d\n",&arr);           // Address of 1D array is 12057480
	// &(1D)=> Address of 1D array
	
	printf("Element address of 1D array is %d\n",arr);    // Element address of 1D array is 12057480
	// 1D nav=> Element address
	
	printf("1D array size + 1 is %d\n",&arr+1);			  // 1D array size + 1 is 12057500
	// 1D size ne pudhe
	
	printf("Element address + 1 is %d\n",arr+1);		  //Element address + 1 is 12057484
	// 1D(element size ne pudhe)
	
	printf("arr[2] is %d\n",arr[2]);					  // arr[2] is 30
	// 1D->2nd element che nav
	// arr[2] is 2nd element name of 1D arr i.e. value
	
	printf("arr[2]+1 is %d\n",arr[2]+1);				  // arr[2]+1 is 31
	// 1D->2nd element che nav(value) + 1
	
	printf("arr+3 is %d",arr+3);						  //arr+3 is 12057492
	// Element size chya 3 ne pudhe
	
	//printf("%d",++arr);								  // error C2105: '++' needs l-value
	// arr=arr + 1 => 100 = 104
	//printf("%d",arr++);								 // error C2105: '++' needs l-value
	// arr=arr + 1 => 100 = 104
	
	return 0;
}

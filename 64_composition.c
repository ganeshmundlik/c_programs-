#include<stdio.h>

struct inner
{
	int iNo;
	float fNo;
};

struct Outer
{
	int iNo;
	float fNo;
	struct inner iObj;
	
}oObj;

int main(void)
{
		
	printf("Size Of oObj1 is : %d",sizeof(oObj)); // Size Of oObj1 is : 16

	return 0;
}

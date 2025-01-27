#include<stdio.h>

union Outer1
{
	int iNo;
	double dNo;
	struct Inner1
	{
		char chChar;
		int iNo;

	}iObj1, iObj2;

}oObj1;

union Outer2
{
	int iNo;
	float fNo;
	struct Inner2
	{
		char chChar1;
		char chChar2;

	}iObj[2];

}oObj2;

int main(void)
{
		
	printf("size of oObj1 is :%d\n",sizeof(oObj1));  //size of oObj1 is :8
	printf("size of oObj2 is :%d\n",sizeof(oObj2));  //size of oObj1 is :4

	return 0;
}

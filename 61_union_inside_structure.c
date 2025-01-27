#include<stdio.h>

struct Outer1
{
    char chChar;
	float fNo1;

	union Inner1
	{

       char chChar;
       float fNo1;

	}iobj1,iobj2;

}oObj1;

struct Outer2
{
    char chChar;
	float fNo1;

	union Inner2
	{

       char chChar;
       float fNo1;

	}iObj[2];

}oObj2;

int main(void)
{
	struct Outer1 oObj1;
	struct Outer2 oObj2;

	printf("size of oObj1 is : %d\n",sizeof(oObj1)); //size of oObj1 is : 16
	printf("size of oObj2 is : %d",sizeof(oObj2)); //size of oObj2 is : 16

	return 0;
}


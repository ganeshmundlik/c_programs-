#include<stdio.h>

union Outer1
{
    int iNo;
    double dNo;

	union Inner1
	{

       int iNo;
       float fNo1;

	}iobj1,iobj2;

}oObj1;

union Outer2
{
    int iNo;
	float fNo;

	union Inner2
	{

       char chChar1;
       char chChar2;

	}iObj[6];

}oObj2;

int main(void)
{
	union Outer1 oObj1;
	union Outer2 oObj2;

	printf("size of oObj1 is : %d\n",sizeof(oObj1));      //size of oObj1 is : 8
	printf("size of oObj2 is : %d",sizeof(oObj2));      //size of oObj2 is : 8

	return 0;
}


#include<stdio.h>

struct Outer1
{
	int iNo1;
	float fNo1;

	struct Inner1
	{
		int iNo2;
		float fNO2;
	};
};

struct Outer2
{
	int iNo;
	float fNo;

	struct Inner2
	{
		int iNo;
		float fNO;
		
	}iObj;

};

struct Outer3
{
	char chChar;
	int iNo;

	struct Inner3
	{
		int iNo;
		float fNO;

	}iObj1, iObj2;

	double dNo;

};

struct Outer4
{
	char chChar;
	double dNo;

	struct Inner4
	{
		int iNo;
		float fNO;

	}iObj[3];

};

int main(void)
{
	struct Outer1 oObj1;
	struct Outer2 oObj2;
	struct Outer3 oObj3;
	struct Outer4 oObj4;
	
	printf("size of oObj1 is : %d\n",sizeof(oObj1)); //size of oObj1 is : 16
	printf("size of oObj2 is : %d\n",sizeof(oObj2)); //size of oObj2 is : 16
	printf("size of oObj3 is : %d\n",sizeof(oObj3)); //size of oObj3 is : 32
	printf("size of oObj4 is : %d",sizeof(oObj4));  //size of oObj4 is : 40

	return 0;
}

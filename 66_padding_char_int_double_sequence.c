#include<stdio.h>

struct demo1
{
	char chChar;
	double dNo;
	int iNo;
};

struct demo2
{
	char chChar;
	int iNo;
	double dNo;
};

int main(void)
{
	struct demo1 obj1;
	struct demo2 obj2;
	
	printf("size of obj1 is: %d\n",sizeof(obj1));	// size of obj1 is: 24
	printf("size of obj2 is: %d",sizeof(obj2));	    // size of obj2 is: 16
	
	return 0;
}
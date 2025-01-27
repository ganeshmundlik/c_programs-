#include<stdio.h>

struct demo1
{
	char chChar;
	double dNo;

};

struct demo2
{
	int iNo;
	double dNo;

};

struct demo3
{
	char chChar;
	int iNo;

};

struct demo4
{
	char chChar1;
	char chChar2;

};

int main(void)
{
	struct demo1 obj1;
	struct demo2 obj2;
	struct demo3 obj3;
	struct demo4 obj4;
	
	printf("Size of Obj1 is :%d\n" , sizeof(obj1));	    //Size of Obj1 is :16
	printf("Size of Obj2 is :%d\n" , sizeof(obj2));	    //Size of Obj2 is :16
	printf("Size of Obj3 is :%d\n" , sizeof(obj3));	    //Size of Obj3 is :8
	printf("Size of Obj4 is :%d\n" , sizeof(obj4));		//Size of Obj4 is :2
	
	return 0;
}

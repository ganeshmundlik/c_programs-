#include<stdio.h>
struct demo1
{
	char chChar;
	double dNo;
};

#pragma pack(1)

struct demo2
{
	char chChar;
	double dNo;
};

struct demo1 obj1;     //for demo1 struct defalut size ghenar karan #pragma pack(1) nantar write kela aahe
struct demo2 obj2;     

int main(void)
{
	
	printf("size of obj1 is %d\n",sizeof(obj1));    // size of obj1 is 16
	printf("size of obj2 is %d",sizeof(obj2));		// size of obj2 is 9

	return 0;
}
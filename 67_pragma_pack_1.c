#include<stdio.h>
// default pack size
struct demo1
{
	char chChar;
	double dNo;

}obj1;

#pragma pack(4)
struct demo2
{
	char chChar;
	double dNo;

}obj2;

#pragma pack(1)
struct demo3
{
	char chChar;
	double dNo;

}obj3;

#pragma prack()
struct demo4
{
	char chChar;
	double dNo;

}obj4;

int main(void)
{
	
	printf("Size of Obj1 is :%d\n" , sizeof(obj1));	    //Size of Obj1 is :16
	printf("Size of Obj2 is :%d\n" , sizeof(obj2));	    //Size of Obj2 is :12
	printf("Size of Obj3 is :%d\n" , sizeof(obj3));	    //Size of Obj3 is :9
	printf("Size of Obj4 is :%d\n" , sizeof(obj4));		//Size of Obj4 is :9
	
	return 0;
}







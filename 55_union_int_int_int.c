#include<stdio.h>

union demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
	union demo obj;   
	 // warning C4700: uninitialized local variable 'obj' used
	printf("obj.iNo1 : %d\t obj.iNo2 : %d\t obj.iNo3 :%d\n",obj.iNo1,obj.iNo2,obj.iNo3);   //obj.iNo1 : 14153544      obj.iNo2 : 14153544     obj.iNo3 :14153544
    
	obj.iNo1=10;
    printf("obj.iNo1 : %d\t obj.iNo2 : %d\t obj.iNo3 :%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  //obj.iNo1 : 10    obj.iNo2 : 10   obj.iNo3 :10

    obj.iNo2=20;
    printf("obj.iNo1 : %d\t obj.iNo2 : %d\t obj.iNo3 :%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  //obj.iNo1 : 20    obj.iNo2 : 20   obj.iNo3 :20

    obj.iNo3=30;
    printf("obj.iNo1 : %d\t obj.iNo2 : %d\t obj.iNo3 :%d\n",obj.iNo1,obj.iNo2,obj.iNo3);  //obj.iNo1 : 30    obj.iNo2 : 30   obj.iNo3 :30
	
	return 0;
}



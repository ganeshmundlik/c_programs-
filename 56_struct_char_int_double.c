#include<stdio.h>

struct demo
{
    char chChar;
    int iNo;
    float fNo;
};

int main(void)
{
	struct demo obj;
	//c(14) warning C4700: uninitialized local variable 'obj' used
	printf("obj.chChar : %c\t obj.iNo : %d\t obj.fNo :%f\n",obj.chChar,obj.iNo,obj.fNo);  //obj.chChar : ►   obj.iNo : 0     obj.fNo :0.000000

    obj.chChar='A';
    printf("obj.chChar : %c\t obj.iNo : %d\t obj.fNo :%f\n",obj.chChar,obj.iNo,obj.fNo); //obj.chChar : A   obj.iNo : 0     obj.fNo :0.000000

    obj.iNo=10;
    printf("obj.chChar : %c\t obj.iNo : %d\t obj.fNo :%f\n",obj.chChar,obj.iNo,obj.fNo); //obj.chChar : A   obj.iNo : 10    obj.fNo :0.000000

    obj.fNo=99.99f;
    printf("obj.chChar : %c\t obj.iNo : %d\t obj.fNo :%f\n",obj.chChar,obj.iNo,obj.fNo); //obj.chChar : A   obj.iNo : 10    obj.fNo :99.989998
	
	return 0;
}



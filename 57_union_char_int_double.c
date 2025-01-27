#include<stdio.h>

union demo
{
    char chChar;
    int iNo;
    float fNo;
};

int main(void)
{
	union demo obj;
	//// warning C4700: uninitialized local variable 'obj' used
	printf("obj.chChar : %c\t obj.iNo : %d\t obj.fNo :%f\n",obj.chChar,obj.iNo,obj.fNo);//obj.chChar : (   obj.iNo : 6223912       obj.fNo :0.000000

    obj.chChar='A';
    printf("obj.chChar : %c\t obj.iNo : %d\t obj.fNo :%f\n",obj.chChar,obj.iNo,obj.fNo);//obj.chChar : A   obj.iNo : 6223937       obj.fNo :0.000000

    obj.iNo=10;
    printf("obj.chChar : %c\t obj.iNo : %d\t obj.fNo :%f\n",obj.chChar,obj.iNo,obj.fNo); //obj.chChar :
                                                                                                        //obj.iNo : 10    obj.fNo :0.000000

    obj.fNo=99.99f;
    printf("obj.chChar : %c\t obj.iNo : %d\t obj.fNo :%f\n",obj.chChar,obj.iNo,obj.fNo);//obj.chChar : ß   obj.iNo : 1120402145    obj.fNo :99.989998
	
	return 0;
}

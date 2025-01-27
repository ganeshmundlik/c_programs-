#include<stdio.h>

struct demo
{
    int iNo1;
    int iNo2;
    int iNo3;
};

int main(void)
{
	struct demo obj;
	
	printf("obj.iNo1 : %d\t obj.iNo2 : %d\t obj.iNo3 :%d\n",obj.iNo1,obj.iNo2,obj.iNo3); //obj.iNo1 : 13052176      obj.iNo2 : 0    obj.iNo3 :9435336
   
    obj.iNo1=10;
    printf("obj.iNo1 : %d\t obj.iNo2 : %d\t obj.iNo3 :%d\n",obj.iNo1,obj.iNo2,obj.iNo3); //obj.iNo1 : 10    obj.iNo2 : 0    obj.iNo3 :9435336

    obj.iNo2=20;
    printf("obj.iNo1 : %d\t obj.iNo2 : %d\t obj.iNo3 :%d\n",obj.iNo1,obj.iNo2,obj.iNo3); //obj.iNo1 : 10    obj.iNo2 : 20   obj.iNo3 :9435336

    obj.iNo3=30;
    printf("obj.iNo1 : %d\t obj.iNo2 : %d\t obj.iNo3 :%d\n",obj.iNo1,obj.iNo2,obj.iNo3); //obj.iNo1 : 10    obj.iNo2 : 20   obj.iNo3 :30
	
	return 0;
}



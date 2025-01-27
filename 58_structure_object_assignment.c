#include<stdio.h>

struct demo
{
	int iNo;
	float fNo;
};

int main(void)
{
	struct demo obj1;
	struct demo obj2;
	struct demo obj3;

	printf("Enter the obj1 values\n");//Enter the obj1 values
	printf("Enter integer : ");      //Enter integer :
	scanf("%d",&obj1.iNo);			// 20
	printf("Enter float : ");       //Enter float :
	scanf("%f",&obj1.fNo);			// 5.00

	obj2 = obj1;
	obj3.iNo = obj1.iNo;
	obj3.fNo = obj1.fNo;

	printf("obj1 values are iNo = %d and fNo = %f\n",obj1.iNo,obj1.fNo);  // obj1 values are iNo = 20 and fNo = 5.000000
	printf("obj2 values are iNo = %d and fNo = %f\n",obj2.iNo,obj2.fNo);  // obj2 values are iNo = 20 and fNo = 5.000000
	printf("obj3 values are iNo = %d and fNo = %f\n",obj3.iNo,obj3.fNo);  // obj3 values are iNo = 20 and fNo = 5.000000

	return 0;
}





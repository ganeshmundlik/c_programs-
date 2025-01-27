#include<stdio.h>

struct demo
{
	int iNo;
	float fNo;
};

void Scan(struct demo*);
void Print(struct demo);

int main(void)
{
	struct demo obj;
	
	Scan(&obj);
	Print(obj);
	
	return 0;
}

void Scan(struct demo *pPtr)
{
	printf("Enter integer number :\t");//Enter integer number :  15
	scanf("%d",&pPtr->iNo);
	
	printf("Enter float number :\t");//Enter float number :    20.5
	scanf("%f",&pPtr->fNo);	
}

void Print(struct demo obj)
{
	printf("integer is :\t%d\n",obj.iNo);//integer is :    15
	printf("float is :\t%f",obj.fNo);//float is :    20.500000
		
}


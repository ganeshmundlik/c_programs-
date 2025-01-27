#include<stdio.h>

void Fun1(void);
void Fun2(void);

int main(void)
{

	int iCounter;

	for(iCounter = 0; iCounter < 3; iCounter++)
		Fun1();

	for(iCounter = 0; iCounter < 3; iCounter++)
		Fun2();

	return 0;
}


void Fun1(void)
{
	int iNo = 10;
	iNo++;
	printf("In Fun1 %d\n",iNo);    // In Fun1 11  In Fun1 11   In Fun1 11
}


void Fun2(void)
{
	static int iNo = 10;
	iNo++;
	printf("In Fun2 %d\n",iNo);   // In Fun2 11   In Fun2 12   In Fun2 13

}	



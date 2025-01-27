#include<stdio.h>

int main(void)
{

	int arr[]={10,20,30,40,50};
	
	int *pPtr1 =&arr[0];
	int *pPtr2 = &arr[4];

	printf("pPtr1  : %d\n",pPtr1);                                            //pPtr1  : 12582164
	printf("pPtr2  : %d\n",pPtr2);                                            //pPtr2  : 12582180

	printf("++pPtr1  : %d\n",++pPtr1);                                        //++pPtr1  : 12582168
	printf("pPtr1++  : %d\n",pPtr1++);                                       //pPtr1++  : 12582168

	printf("--pPtr2  : %d\n",--pPtr2);                                         //--pPtr2  : 12582176
	printf("pPtr2--  : %d\n",pPtr2--);                                        //pPtr2--  : 12582176

	printf("pPtr1+3  : %d\n",pPtr1+3);                                       //pPtr1+3  : 12582184
	//printf("pPtr1 + pPtr2  : %d\n",pPtr1 + pPtr2);                         //error C2110: '+' : cannot add two pointers

	printf("pPtr-3  : %d\n",pPtr1-3);                                       //pPtr-3  : 12582160
	printf("pPtr1 - pPtr2  : %d\n",pPtr1 - pPtr2);                          //pPtr1 - pPtr2  : 0

	//printf("pPtr1*3  : %d\n",pPtr1*3);                    //error C2296: '*' : illegal, left operand has type 'int *'
	//printf("pPtr1 * pPtr2  : %d\n",pPtr1 * pPtr2);       //error C2296: '*' : illegal, left operand has type 'int *'  //error C2297: '*' : illegal, right operand has type 'int *'

	//printf("pPtr1/2  : %d\n",pPtr1/2);                   //error C2296: '/' : illegal, left operand has type 'int *'
	//printf("pPtr1 / pPtr2  : %d\n",pPtr1 / pPtr2);       // error C2296: '/' : illegal, left operand has type 'int *'  //error C2297: '/' : illegal, right operand has type 'int *'

	//printf("pPtr1%3  : %d\n",pPtr1%3);                  // error C2296: '%' : illegal, left operand has type 'int *'
	//printf("pPtr1 % pPtr2  : %d\n",pPtr1 % pPtr2);     //error C2296: '%' : illegal, left operand has type 'int *' //error C2297: '%' : illegal, right operand has type 'int *'

	return 0;
	
}










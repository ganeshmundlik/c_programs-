#include<stdio.h>
// Function declarations
int Addition(int , int );
int Substraction(int , int );
float Division(int , int );
int Multiplication(int , int );
int Modulus(int , int );


int main(void)
{
	int iNo1;
	int iNo2;
	int iAns;
	int iChoice;
	
	while(1)
	{
		printf("1.Addition\n2.Substraction\n3.Multiplication\n4.Division\n5.Modulus\n6.Exit\n");
		
		printf("Enter your choice :");
		scanf("%d",&iChoice);
		
	  if(iChoice<=0 || iChoice>=7)
	  {
		printf("wrong choice\n");
		continue;
	  }
	  else if(iChoice==6)
		break;
	
	    printf("Enter two number:\t");
		scanf("%d\t%d",&iNo1,&iNo2);
		
		switch(iChoice)
		{
		   case 1:
			  iAns=Addition(iNo1,iNo2);
			  break;
			  
		   case 2:
			  iAns=Substraction(iNo1,iNo2);
			  break;
			  
		   case 3:
			  iAns=Multiplication(iNo1,iNo2);
			  break;
			  
		   case 4:
			  iAns=Division(iNo1,iNo2);
			  break;
			  
		   case 5:
              iAns=Modulus(iNo1,iNo2);
              break;
			  
			  
		}
		
	}
	return 0;
}
int Addition(int iNum1, int iNum2)
{
    return iNum1 + iNum2;
}

int Substraction(int iNum1, int iNum2)
{
    return iNum1 - iNum2;
}

float Division(int iNum1, int iNum2)
{
        return iNum1 / iNum2; 
}

int Multiplication(int iNum1, int iNum2)
{
    return iNum1 * iNum2;
}

int Modulus(int num1, int num2)
{
        return num1 % num2; 
}

/*
1.Addition
2.Substraction
3.Multiplication
4.Division
5.Modulus
6.Exit
Enter your choice :1
Enter two number:       21
21
1.Addition
2.Substraction
3.Multiplication
4.Division
5.Modulus
6.Exit
Enter your choice :
*/

           	   
	    
		  
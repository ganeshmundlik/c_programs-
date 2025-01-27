#include<stdio.h>
 
void Fun(); 
int No=10;

int main(void)
{
	int No=20;
	printf("%d\n",No);//20
	
	{
	  char No='A';
	  printf("%d\n",No);//65	  
	}
	
	printf("%d\n",No);//20
	
	Fun();
   	 
	return 0;
}
void Fun()
{
	
	printf("%d",No);//10
	
}
#include<stdio.h>

#define EQUAL  1
#define NOT_EQUAL 0

struct demo
{
    int iNo;
    float fNo;
};

int Compairobjects(struct demo ,struct demo);

int main()
{
    int iRet;

    struct demo obj1;
    struct demo obj2;

    printf("Enter obj1 values : \n"); //Enter obj1 values :
    printf("Enter integer :\t\n");//Enter integer :
    scanf("%d",&obj1.iNo);//5
    printf("Enter float :\t\n");//Enter float :
    scanf("%f",&obj1.fNo);//15.5

    printf("Enter obj2 values : \n");//Enter obj2 values :
    printf("Enter integer :\t\n");//Enter integer :
    scanf("%d",&obj2.iNo);//7
    printf("Enter float :\t\n");//Enter float :
    scanf("%f",&obj2.fNo);  //15.5

    printf("Obj1 values are :\n");//Obj1 values are :
    printf("integer is : %d\n",obj1.iNo);//integer is : 5
    printf("Float is : %f\n",obj1.fNo);//Float is : 10.500000

    printf("Obj2 values are :\n");//Obj2 values are :
    printf("integer is : %d\n",obj2.iNo);//integer is : 7
    printf("Float is : %f\n",obj2.fNo);//Float is : 15.500000

    iRet=Compairobjects(obj1,obj2);
    if(EQUAL==iRet)
        printf("objects are equal");
    else
        printf("Objects Not equal");//Objects Not equal


    return 0;
}

int Compairobjects(struct demo  obj1,struct demo obj2)
{
    if(obj1.iNo==obj2.iNo&&obj1.fNo==obj2.fNo)
        return EQUAL;
    return NOT_EQUAL;
}

/*
Enter obj1 values :
Enter integer :
5
Enter float :
10.5
Enter obj2 values :
Enter integer :
7
Enter float :
15.5
Obj1 values are :
integer is : 5
Float is : 10.500000
Obj2 values are :
integer is : 7
Float is : 15.500000
Objects Not equal

*/

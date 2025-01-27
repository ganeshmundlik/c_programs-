#include<stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void AssignObjects(struct demo const * ,struct demo*,struct demo*);

int main(void)
{
    struct demo obj1;
    struct demo obj2;
    struct demo obj3;

    printf("Enter obj1 values \n");            //Enter obj1 values
    printf("Enter integer :\t");              //Enter integer : 50
    scanf("%d",&obj1.iNo);
    printf("Enter float :\t");                //Enter float :   55.55
    scanf("%f",&obj1.fNo);

    AssignObjects(&obj1,&obj2,&obj3);

    printf("obj1 Integer is :%d\n",obj1.iNo); //obj1 Integer is :50
    printf("obj1 Float is :%f\n\n",obj1.fNo); //obj1 Float is :55.549999

    printf("obj2 Integer is :%d\n",obj2.iNo); //obj2 Integer is :50
    printf("obj2 Float is :%f\n\n",obj2.fNo); //obj2 Float is :55.549999

    printf("obj3 Integer is :%d\n",obj3.iNo); //obj3 Integer is :50
    printf("obj3 Float is :%f\n",obj3.fNo);  //obj3 Float is :55.549999

    return 0;
}

void AssignObjects(struct demo const *pobj1,struct demo*pobj2,struct demo *pobj3)
{
    *pobj2=*pobj1;
    pobj3->iNo=pobj1->iNo;
    pobj3->fNo=pobj1->fNo;
}

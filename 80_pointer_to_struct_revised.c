#include<stdio.h>

struct demo
{
    int iNo;
    float fNo;
};

void Print(struct demo const*);

int main(void)
{
    struct demo Obj;
    
    Print(&Obj);

    return 0;
}

void Print(struct demo const *pPtr)
{
    printf("Integer is :%d\n",pPtr->iNo);//Integer is :19921640
    printf("Float is :%f\n",(*pPtr).fNo);//Float is :0.000000
}
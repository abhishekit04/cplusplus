#include<stdio.h>

void swapv (int, int);
void swapr (int , int );
void swapa (int *, int *);

int main() 
{
    int a =10, b=20;

    swapv (a,b); 
    printf("\n%d\t%d",a,b);

    swapa (&a,&b); 
    printf("\n%d\t%d\n",a,b);

    swapr (a,b); 
    printf("\n%d\t%d\n",a,b);
    return 0;
}

void swapv (int i,int j)
{
    int t;

    t = i;
    i = j;
    j = t;

    printf("%d\t%d\n",i,j);
}

void swapa (int *i,int *j)
{
    int t;

    t = *i;
    *i = *j;
    *j = t;
}

void swapr (int i,int j)
{
    int t;

    t=i;
    i=j;
    j=t;
}
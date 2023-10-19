#include<stdio.h>
int main()
{
    float  X,Y;
    scanf("%f%f",&X,&Y);
    int p;
    scanf("%d",&p);
    p = Y-X;
    printf("%.2f",(p*100)/X);
}
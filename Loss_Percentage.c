#include<stdio.h>
int main()
{
    float X,Y,l,lf;
    scanf("%f%f%f",&X,&Y,&l);
    l=X-Y;
    lf=l/X*100;
    printf("%.2f",lf);
}
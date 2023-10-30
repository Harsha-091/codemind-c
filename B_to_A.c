#include<stdio.h>
int main()
{
    int A,B,x;
    scanf("%d%d",&A,&B);
    for(x=B;x>=A;x--)
    {
        printf("%d ",x);
    }
}
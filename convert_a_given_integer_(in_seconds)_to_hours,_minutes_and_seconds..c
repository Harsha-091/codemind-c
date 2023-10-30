#include<stdio.h>
int main()
{
    int ss;
    scanf("%d",&ss);
    printf("H:M:S-%d:%d:%d",ss/3600,(ss%3600)/60,(ss%3600)%60);
}
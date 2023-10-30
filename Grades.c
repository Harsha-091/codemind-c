#include<stdio.h>
int main()
{
    float ph,ch,bi,ma,cs,p;
    scanf("%f%f%f%f%f",&ph,&ch,&bi,&ma,&cs);
    p = ((ph+ch+bi+ma+cs)/500)*100;
    if (p>=90)
    {
        printf("Grade A");
    }
    else if(p>=80)
    {
        printf("Grade B");
    }
    else if (p>=70)
    {
        printf("Grade C");
    }
    else if(p>=60)
    {
        printf("Grade D");
    } 
    else if(p>=40)
    {
        printf("Grade E");
    }
    else if(p<40)
    {
        printf("Grade F");
    }
}
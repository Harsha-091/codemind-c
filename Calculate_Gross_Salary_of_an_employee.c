#include<stdio.h>
int main()
{
    float Salary,HRA,DA;
    scanf("%f
%f
%f",&Salary,&HRA,&DA);
    printf("%.2f
%.2f",0.12*Salary,Salary+HRA+DA+(0.12*Salary));
    
}
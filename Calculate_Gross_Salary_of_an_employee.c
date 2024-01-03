#include<stdio.h>
int main()
{
    float salary;
    float HRA;
    float DA;
    scanf("%f%f%f",&salary,&HRA,&DA);
    float PF = (12/100.0)*salary;
    float GS = salary+HRA+DA+PF;
    printf("%.2f
%.2f
",PF,GS);
    
}
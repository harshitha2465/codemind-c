#include<stdio.h>
#include<math.h>
int main()
{
    float p,r,t;
    scanf("%f%f%f",&p,&r,&t);
    float cl=p*pow((1+r/100),t)-p;
    printf("%.2f",cl);
}
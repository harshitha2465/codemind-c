#include<stdio.h>
int main()
{
    int n;
    float t,s;
    scanf("%d",&n);
    if(n<=199){
        t=n*1.20;
    }
    else if(n>200&&n<400)
    {
        t=n*1.50;
    }
    else if(n>400&&n<600)
    {
        t=n*1.80;
    }
    else
    {
        t=n*2.00;
    }
    if(t>400)
    {
        s=t*0.15;
    }
    else if(t<400)
    {
        s=100;
    }
    t=t+s;
    printf("%.2f
",t);
}
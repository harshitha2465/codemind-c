#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    int totalcost = 4 * x;
    if (totalcost <= 1000)
    {
        printf("YES
");
    }
    else
    {
        printf("NO
");
    }
}
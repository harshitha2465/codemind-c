#include<stdio.h>
int main()
{
    int min;
    scanf("%d",&min);
    int hours = min/60;
    int minutes = min%60;
    printf("%d Hour(s) %d Minute(s)
",hours,minutes);
}
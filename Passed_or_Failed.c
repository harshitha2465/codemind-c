#include<stdio.h>
int main()
{
    int E,M,P,C,CS;
    scanf("%d%d%d%d%d",&E,&M,&P,&C,&CS);
    {
        if(E>=35&&M>=35&&P>=35&&C>=35&&CS>=35)
        {
            printf("PASSED");
        }
        else
        {
            printf("FAILED");
        }
    }
}
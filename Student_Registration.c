#include<stdio.h>
int main()
{
    int tc=0;
    scanf("%d",&tc);
    int i=0;
    for(i=1;i<=tc;i++){
    int f=0,ts=0,fs=0;
    scanf("%d%d%d",&f,&ts,&fs);
    int v=ts-fs;
    if(v>=f)
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
}
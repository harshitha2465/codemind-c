#include<stdio.h>
int main()
{
    char s[10];
    for(int i=0;i<10;i++){
        scanf("%c",s+i);
    }
    printf("%c",s[6]);
}
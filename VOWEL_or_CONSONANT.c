#include<stdio.h>
int main()
{
    char x;
    scanf("%c",&x);
    {
        if(x == 'a'||x == 'e'||x == 'i'||x == 'o'||x == 'u')
        {
            printf("VOWEL");
        }
        else if(x == 'A'||x == 'E'||x == 'I'||x == 'o'||x == 'U')
        {
            printf("VOWEL");
        }
        else
        {
            printf("CONSONANT");
        }
    }
}
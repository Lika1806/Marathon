#include <stdio.h>
int main()
{
    char c1=0;
    char c2=0;
    printf("input a first letter: ");
    scanf(" %c", &c1);
    printf("input a second letter: ");
    scanf(" %c", &c2);
    if (((c1>=65 && c1<=90)||(c1>=97 && c1<=122))&&((c2>=65 && c2<=90)||(c2>=97 && c2<=122)))
    {
        if (c1-c2==32 || c2-c1 == 32)
            printf("True\n");
        else   
            printf("False\n");
    }
    else
        printf("Your input is invalid:\n");
    return 0;
}
#include <stdio.h>
int main()
{
    char symbol=0;
    printf("Enter the letter: ");
    scanf(" %c", &symbol);
    if (symbol>=48 && symbol<=57)
    {
        printf("True\n", symbol+32);
    }
    else printf("False\n");
    return 0;
}
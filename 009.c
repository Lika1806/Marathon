#include <stdio.h>
int main()
{
    char symbol=0;
    printf("Enter the letter: ");
    scanf(" %c", &symbol);
    if (symbol>=65 && symbol<=90)
    {
        printf("the lowercase letter is << %c >>\n", symbol+32);
    }
    else if (symbol>=97 && symbol<=122) printf("Your input is already lowercase:\n");
    else printf("Input is not valid:\n");
    return 0;
}
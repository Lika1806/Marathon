#include <stdio.h>
int main()
{
    char symbol=0;
    printf("Enter the letter: ");
    scanf("%c", &symbol);
    if ((symbol>=65 && symbol<=90)||(symbol>=97 && symbol<=122))
    {   
        switch(symbol)
            {
                case 'a':
                case 'A':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                case 'i':
                case 'I':
                case 'e':
                case 'E':
                    printf("The letter i a vowel\n");
                    break;
                default:
                    printf("The letter i a consonant\n");
        
            }
   }
   else printf("The input is invalid:\n");
    return 0;
}
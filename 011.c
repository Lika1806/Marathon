#include <stdio.h>
int main()
{
    char text[100];
    printf("Input a text(maximum %d charecters): ", sizeof(text));
    int vowel=0;
    int cons=0;
    int i=0;
    while(1)
    {
        scanf("%c", &text[i]);
        if (text[i] == '\n' || i==99) {
            text[i] = '\0';
            break;}
        if ((text[i]>=65 && text[i]<=90)||(text[i]>=97 && text[i]<=122))
        {   
            switch(text[i])
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
                        vowel+=1;
                        break;
                    default:
                        cons+=1;
            
                }
         }
         ++i;
    }
    printf("number of vowels: %d:\nnumber of consonants: %d\n", vowel,cons);
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int number=rand()%100+1;
    int guess;
    printf("%d\n", number);
    while(1)
    {
        printf("Enter your guess: ");
        scanf("%d",&guess);
        if(guess==number)
        {
            printf("You guessed a number !!!\n");
            break;
        }
        else if (guess>number)
            printf("Your number is too large: try again\n");
        else
            printf("Your number is too small: try again\n");
         
    }
    return 0;
}
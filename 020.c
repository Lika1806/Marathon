#include <stdio.h>
int main()
{
    int number=0;
    printf("input a number you want to check: ");
    scanf("%d", &number);
    if (number==0)
    {
        printf("0 is not considered even or odd number:\n");
    }
    else if (number%2==0) 
        printf("the number %d is even\n", number); 
    else printf ("the number %d is odd\n", number);     
    

    return 0;
}
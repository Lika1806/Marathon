#include <stdio.h>
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    number|= 1<<4;
    printf("New number is %d\n",number);
    return 0;
}
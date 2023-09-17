#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year: ");
    scanf("%d", &year);
    if (year%4==0)
    printf("True: Is leap:\n");
    else
    printf("False: Is NOT leap:\n");
    return 0;
}
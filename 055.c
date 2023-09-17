#include <stdio.h>
int main()
{
    int number=0;
    int i=1;
    printf("input a number: ");
    scanf("%d", &number);
    if (number<0)
        printf("The number can't be negative.\n");
    else 
        while(i*i<=number)
            ++i;
    printf("%d\n",--i);
    return 0;
}
#include <stdio.h>
int main()
{
    int x=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    float res;
    res = 4*x+21*x*x-12;
    printf("The result is %.2f\n", res);
    return 0;
}
#include <stdio.h>
int main()
{
    int x=0;
    printf("Enter a number: ");
    scanf("%d", &x);
    float res;
    res = x/(5+2)+30*x-51;
    printf("The result is %.2f\n", res);
    return 0;
}
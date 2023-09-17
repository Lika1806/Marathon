#include <stdio.h>
int main()
{
    int x=0;
    int y=0;
    printf("Enter firts number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);
    float res;
    if (y==0) printf("Division by zero is not allowed:\n");
    else 
    {
        res = x*y + 21*x/y - 200;
        printf("The result is %.2f\n", res);
    }
    return 0;
}
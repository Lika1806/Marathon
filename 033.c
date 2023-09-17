#include <stdio.h>
int main()
{
    int n;
    int sum;
    printf("Enter a number: ");
    scanf("%d", &n);
    if (n<0)
        n=-n;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("%d\n", sum);
    
    return 0;
}
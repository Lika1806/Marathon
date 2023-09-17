#include <stdio.h>
int main()
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n<0)
        n=-n;
    for (int i=0;i<=9;++i)
        printf("%d x %d = %d\n", n,i,n*i);
    return 0;
}
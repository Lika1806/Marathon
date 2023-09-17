#include <stdio.h>
int main()
{
    int n1;
    int n2;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    int tmp;
    int sum=0;
    if (n2<n1)
    {
        tmp=n1;
        n1=n2;
        n2=tmp;
    }
    int first;
        if(n1<0)
            first=((n1)/2)*2;
        else
            first=((n1+1)/2)*2;
    for (int i = first;i<=n2;i+=2)
        sum+=i;
    printf("The sum is %d\n", sum);

    return 0;
}
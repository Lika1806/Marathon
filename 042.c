#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    printf("input a first number: ");
    scanf("%d", &n1);
    printf("input a second number: ");
    scanf("%d", &n2);
    int res=n1 & n2;
    printf("The result is %d:\n",res);
    return 0;
}
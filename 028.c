#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    printf("input a first number: ");
    scanf("%d", &n1);
    printf("input a second number: ");
    scanf("%d", &n2);
    if (n1!=0 && n2!=0)
    {
        if (n1%n2==0 || n2%n1==0)
            printf("True\n");
        else   
            printf("False\n");
    }
    else if(n1!=0 || n2!=0)
        printf("True\n");
    else
        printf("You can't devide by zero:\n");
    return 0;
}
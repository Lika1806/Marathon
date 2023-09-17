#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    int n3=0;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    printf("Enter third number: ");
    scanf("%d", &n3);
    if (n1==n2 && n2==n3)
        printf("All three numbers are equal:\n");
    else if(n1==n2 || n2==n3 || n1==n3)
    {
        if (n1>n2 || n1>n3)
            printf("The largest number is %d\n", n1);
        else if (n2>n1 || n2>n3)
            printf("The largest number is %d\n", n2);
        else
            printf("The largest number is %d\n", n3);
    }
    else  
        printf("All three numbers are different\n");  
    return 0;
}
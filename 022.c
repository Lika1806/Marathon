#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    if(n1==n2)
        printf("The numbers are equal:\n");
    else if (n1>n2)
        printf("The largest number is %d\n", n1);  
    else  
        printf("The largest number is %d\n", n2);  
    return 0;
}
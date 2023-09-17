#include <stdio.h>
int main()
{
    int height=0;
    printf("Մուտքագրեք Ձեր հասակը (սանտիմետրերով): ");
    scanf("%d", &height);
    if(height>=150)
        printf("Դուք համապատասխանում եք:\n");
    else
        printf("Ներողություն, դուք չեք համապատասխանում:\n");
    return 0;
}
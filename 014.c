#include <stdio.h>
int main()
{
    int age=0;
    printf("Մուտքագրեք Ձեր տարիքը: ");
    scanf("%d", &age);
    if(age<18)
        printf("Դուք անչափահաս եք:\n");
    else if (age<=65)
        printf("Դուք չափահաս եք:\n");
    else
         printf("Դուք տարեց քաղաքացի եք:\n");   
    return 0;
}
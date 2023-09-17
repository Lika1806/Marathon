#include <stdio.h>
int main()
{
    float cel=0;
    float far=0;
    printf("Enter tempreture in Celcius: ");
    scanf("%f", &cel);
    far=(cel*9/5)+32;
    printf("%.2f celcius = %.2f fahrenheit\n",cel,far);
    return 0;
}
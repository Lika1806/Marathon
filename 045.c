#include <stdio.h>
int main()
{
    int number=0;
    int shift=0;
    printf("input a number: ");
    scanf("%d", &number);
    printf("input shift number: ");
    scanf("%d", &shift);
    number<<=shift;
    printf("The result is %d:\n",number);
   return 0;
}
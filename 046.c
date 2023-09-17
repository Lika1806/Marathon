#include <stdio.h>
int main()
{
    int number=0;
    int zero_count=sizeof(int)*8;
    int one_count=0;
    printf("input a number: ");
    scanf("%d", &number);
    while(number)
    {
        if(number&1==1);
        {
            ++one_count;
            --zero_count;
        }
        number>>=1;
    }

    printf("The number of '0's: %d\nThe number of '1's: %d\n",zero_count,one_count);
    return 0;
}
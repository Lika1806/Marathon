#include <stdio.h>
int main()
{
    int number=0;
    int res=1;
    printf("input a number: ");
    scanf("%d", &number);
    if (number<0)
        printf("The number can't be negative.\n");
    else if (number!=0 || number!=1)
        for(int i=2;i<=number;++i)
            res*=i;
    printf("%d ! = %d:\n",number,res);
    return 0;
}
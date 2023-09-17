#include <stdio.h>
int main()
{
    int num=0;
    printf("input number: ");
    scanf("%d", &num);
    int sum=1;
    for (int i=2;i<=num/2;++i)
        {
            if (num%i==0)
            {
                sum+=i;
            }        
        }
    if(sum==num)
    printf("The number %d perfect\n", num);
    else    
    printf("The number %d NOT perfect\n", num);
    return 0;
}
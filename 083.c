#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("input size : ");
    scanf("%d", &size);    
    int* p = (int*)(malloc(sizeof(int)*size));
    int number=2;
    int is_prime;
    int j=0;
    while(size)
    {
        is_prime=1;
        for(int i=2;i<=number/2;++i)
        {
            if(number%i==0)
            {
                is_prime=0;
                break;
            }
        }
        if(is_prime)
        {    p[j++]=number;
        --size;
        }
        ++number;

    }
    for(int i=0;i<j;++i)
        printf("%d ",p[i]);
    free(p);
    return 0;
}
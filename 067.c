#include <stdio.h>
int main()
{
    int arr[100];
    int len=0;
    int evens;
    printf("How many elements do you want to input? ");
    scanf("%d", &len);
    printf("Input elements: ");
    int sum=0;
    int count=len;
    for(int i=0;i<len;++i){
        scanf("%d",&arr[i]);
        if(arr[i]==1)
            --count;
        else
            for(int j=2;j<=arr[i]/2;++j)
            {
                if (arr[i]%j==0)
                {
                    --count;
                    break;
                }
            }
    }

    printf("The number of prime numbers: %d \n",count);

    return 0;
}
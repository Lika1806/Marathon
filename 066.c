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
    for(int i=0;i<len;++i){
        scanf("%d",&arr[i]);
        if (arr[i]%2==0)
            ++evens;
    }

    printf("The number of even elements: %d \n",evens);

    return 0;
}
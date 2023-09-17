#include <stdio.h>
int main()
{
    int arr[100];
    int len=0;
    printf("How many elements do you want to input? ");
    scanf("%d", &len);
    printf("Input elements: ");
    int sum=0;
    for(int i=0;i<len;++i){
        scanf("%d",&arr[i]);
        sum+=arr[i];
    }

    printf("The arithmetic average of numbers equals to: %d \n",sum/len);

    return 0;
}
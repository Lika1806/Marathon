#include <stdio.h>
int main()
{
    int arr[100];
    int len=0;
    printf("How many elements do you want to input? ");
    scanf("%d", &len);
    printf("Input elements: ");
    scanf("%d",&arr[0]);
    int min=arr[0];
    for(int i=1;i<len;++i){
        scanf("%d",&arr[i]);
        if(arr[i]<min)
        min=arr[i];
    }

    printf("The smallest element is %d \n",min);

    return 0;
}
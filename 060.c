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
    int index=0;
    for(int i=1;i<len;++i){
        scanf("%d",&arr[i]);
        if(arr[i]<min)
        {
            min=arr[i];
            index=i;
        }
    }

    printf("Index of the smallest element is %d \n",index);

    return 0;
}
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
    int max=min;
    int min_index=0;
    int max_index=0;
    for(int i=1;i<len;++i){
        scanf("%d",&arr[i]);
        if(arr[i]<min)
        {
            min=arr[i];
            min_index=i;
        }
        if(arr[i]>max)
        {    
            max=arr[i];
            max_index=i;
        }
        
    }

    printf("Sum of indexes: %d \n",min_index+max_index);

    return 0;
}
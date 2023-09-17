#include <stdio.h>
int main()
{
    int arr1[100];
    int arr2[100];
    int new_arr[100];
    int len=0;
    printf("How many elements do you want to input? ");
    scanf("%d", &len);
    printf("Input elements of first array: ");
    for(int i=0;i<len;++i){
        scanf("%d",&arr1[i]);
    }
    printf("Input elements of second array: ");
    for(int i=0;i<len;++i){
        scanf("%d",&arr2[i]);
        new_arr[i]=arr1[i]*arr2[i];
    }
    for(int i=0;i<len;++i){
        printf("%d ",new_arr[i]);
    }
    printf("\n");
    return 0;
}
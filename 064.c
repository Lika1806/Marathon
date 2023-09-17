#include <stdio.h>
int main()
{
    int arr[100];
    int len=0;
    printf("How many elements do you want to input? ");
    scanf("%d", &len);
    printf("Input elements: ");
    int sum=0;
    for(int i=0;i<len;++i)
        scanf("%d",&arr[i]);
    for(int i=len-1;i>=0;--i)
        printf("%d ",arr[i]);
    printf("\n");
    return 0;
}
#include <stdio.h>
int main()
{
    char arr[]="Hello World";
    int len=sizeof(arr)-1;
    int is_polindrome=1;
    for(int i=1;i<len/2+1;++i){
        if(is_polindrome==1 && arr[i]!=arr[len-1-i])
            {
                is_polindrome=0;
                break;
            }
    }
    if (is_polindrome==1)
        printf("The string is polindrome:\n");
    else
        printf("The string is NOT polindrome:\n");
    return 0;
}
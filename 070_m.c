#include <stdio.h>
int main()
{
    char arr[]="Hello World";

    int len=sizeof(arr)-1;

    int upper_count=0;
    for(int i=0;i<len;++i)
    {
        if(arr[i]>='A' && arr[i]<='Z')
            ++upper_count;
    }
    printf("%d\n", upper_count);

    
    
    return 0;
}
#include <stdio.h>
int main()
{
    char arr[]="Hello World";

    int len=sizeof(arr)-1;

    int space_count=0;
    for(int i=0;i<len;++i)
    {
        if(arr[i]==' ')
            ++space_count;
    }
    printf("%d\n", space_count);

    
    
    return 0;
}
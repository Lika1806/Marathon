#include <stdio.h>
int main()
{
    char arr[]="Hello World";

    int len=sizeof(arr)-1;


    for(int i=0;i<len;++i)
    {
        arr[i]-=3;
    }
    printf("%s\n", arr);

    
    
    return 0;
}
#include <stdio.h>
int main()
{
    char arr[]="Hello World";

    int len=sizeof(arr)-1;

    int upper_count=0;
    for(int i=0;i<len;++i)
    {
        if(arr[i]=='l' && arr[i+1]=='l')
            {
                arr[i]='r';
                arr[i+1]='r';
            }
    }
    printf("%s\n", arr);

    
    
    return 0;
}
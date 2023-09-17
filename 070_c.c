#include <stdio.h>
int main()
{
    char arr[]="Hello World";

    int len=sizeof(arr)-1;

    int upper_count=0;
    for(int i=0;i<len;++i)
    {
        if(arr[i]=='l')
            {
                arr[i]='z';
            }
    }
    printf("%s\n", arr);

    
    
    return 0;
}
#include <stdio.h>
int main()
{
    char arr[]="Hello,. W,or.ld";
    int len=sizeof(arr)-1;
    int j=0;
    for(int i=0;i<len;++i)
    {
        if(arr[i]==',' || arr[i]=='.')
            continue;
        arr[j]=arr[i];
        ++j;
    }
    arr[j]='\0';
    printf("%s\n", arr);

    
    
    return 0;
}
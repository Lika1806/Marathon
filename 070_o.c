#include <stdio.h>
int main()
{
    char arr[]="Hello World";
    int chars[128]={[0 ... 127]=0};
    int len=sizeof(arr)-1;
    int j=0;
    int upper_count=0;
    for(int i=0;i<len;++i)
    {
        if(chars[arr[i]]==1)
            continue;
        arr[j]=arr[i];
        chars[arr[i]]=1;
        ++j;
    }
    arr[j]='\0';
    printf("%s\n", arr);

    
    
    return 0;
}
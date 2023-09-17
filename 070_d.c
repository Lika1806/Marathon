#include <stdio.h>
int main()
{
    char arr[]="Hello World";
    int len=sizeof(arr)-1;
    for(int i=1;i<len;++i){
        if(arr[i]>='a' && arr[i]<='z')
                arr[i]-=32;
    }   

    printf("%s\n", arr);
    return 0;
}
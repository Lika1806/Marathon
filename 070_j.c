#include <stdio.h>
int main()
{
    char arr[]="Hello World";
    int len=sizeof(arr)-1;
    int j=0;
    int last_o=-1;
    for(int i=len-1;i>=0;--i){
        if(arr[i]=='o')
            {
                last_o=i;
                break;
            }
    }
    printf("Index of last letter'o': %d\n", last_o);

    
    
    return 0;
}
#include <stdio.h>
int main()
{
    char arr[]="Hello World";
    int len=sizeof(arr)-1;
    int j=0;
    int first_o=-1;
    for(int i=0;i<len;++i){
        if(arr[i]=='o')
            {
                first_o=i;
                break;
            }
    }
    printf("Index of last letter'o': %d\n", first_o);

    
    
    return 0;
}
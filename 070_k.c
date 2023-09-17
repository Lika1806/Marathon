#include <stdio.h>
int main()
{
    char arr[]="Hello World";
    char words[11][11];
    int len=sizeof(arr)-1;
    int j=0; int k=0;
    int in_word=0;
    for(int i=0;i<len;++i)
    {
        if(arr[i]==' ')
            {
                if(in_word==1)
                    {
                        ++j;
                        in_word==0;
                        k=0;
                    }
                words[j][k]='\0';
                in_word=0;
            }
        else if (in_word==0)
        {
            in_word=1;
            words[j][k]=arr[i];
        }
        else
        {
            words[j][++k]=arr[i];
        }
    }
    for (int i=0;i<=j;++i)
    printf("%s\n", words[i]);

    
    
    return 0;
}
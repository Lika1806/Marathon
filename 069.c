#include <stdio.h>
int main()
{
    char arr[]="CheeseBurger";
    int len=sizeof(arr)-1;
    int min=arr[0];
    int max=min;
    int vowel_count=0;
    char tmp;
    for(int i=1;i<len;++i){
        if(arr[i]<min)
                min=arr[i];
        if(arr[i]>max)
            max=arr[i];
        switch(arr[i])
            {
                case 'a':
                case 'A':
                case 'o':
                case 'O':
                case 'u':
                case 'U':
                case 'i':
                case 'I':
                case 'e':
                case 'E':
                    ++vowel_count;
            }
        
    }
    printf("a. Value of smallest charecter: %d\n", min);
    printf("b. Value of largest charecter: %d\n", max);
    printf("c. A number of vowels in a string: %d\n", vowel_count);
    printf("d. ");
    for(int i=len-1;i>=0;--i)
        printf("%c",arr[i]);
    for(int i=0;i<len/2;++i)
        {
            tmp=arr[i];
            arr[i]=arr[len-1-i];
            arr[len-1-i]=tmp;
        }
    printf("\ne. ");
    for(int i=0;i<len;++i)
        {
            printf("%c",arr[i]);
            if(arr[i]>='a' && arr[i]<='z')
                arr[i]-=32;
        }
    printf("\nf. %s\n",arr);
    
    
    
    return 0;
}
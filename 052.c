#include <stdio.h>
int main()
{
    char arr[101];
    int i=0;
   printf("Input an text (maximum 100 symbols): ");
     while(1)
    {
        scanf("%c", &arr[i]);
        if (arr[i] == '\n'|| i==100) {
            arr[i] = '\0';
            break;
            }
        if (arr[i]>='a' && arr[i]<='z')
           {
            arr[i]-=32;
           }

        ++i;
    }
    printf("%s\n", arr);

    return 0;
}
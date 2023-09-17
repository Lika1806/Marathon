#include <stdio.h>
int main()
{
    char arr[100];
    int len=0;
    int i=0;
    printf("Input an text(maximum 100 symbols): ");
     while(1)
    {
        scanf("%c", &arr[i]);
        if (arr[i] == '\n' || i==99) {
            arr[i] = '\0';
            --i;
            break;
            }
        ++i;
    }
    for(int j=i ; j>=0 ; --j)
        printf("%c", arr[j]);

    printf("\n");

    return 0;
}

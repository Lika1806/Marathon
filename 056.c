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
    printf("%s", arr);

    printf("\n");

    return 0;
}

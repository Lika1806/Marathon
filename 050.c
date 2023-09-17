#include <stdio.h>
int main()
{
    char arr[101];
    int numbers[50];
    int len=0;
    int i=0;
    int digit_count=0;
    int in_number=0;
    int count=-1;
    printf("Input an text (maximum 100 symbols): ");
     while(1)
    {
        scanf("%c", &arr[i]);
        if (arr[i] == '\n'|| i==100) {
            arr[i] = '\0';
            break;
            }
        if (arr[i]>='0' && arr[i]<='9')
           {
                if(in_number)
                {
                    numbers[count]*=10;
                    numbers[count]+=(arr[i]-'0');
                }
                else
                {
                    in_number=1;
                    ++count;
                    numbers[count]=arr[i]-'0';
                }
           }
        else if(in_number==1)
            in_number=0;
        ++i;

    }
    for(int j=0;j<=count;++j)
    printf("%d\n", numbers[j]);

    return 0;
}
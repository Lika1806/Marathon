#include <stdio.h>
int main()
{
    int n[4];
    int min;
    printf("Enter number N1: ");
    scanf("%d", &n[0]);
    printf("Enter number N2: ");
    scanf("%d", &n[1]);
    printf("Enter number N3: ");
    scanf("%d", &n[2]);
    printf("Enter number N4: ");
    scanf("%d", &n[3]);
    if(n[0]+n[1]+n[2]+n[3]==0)
    {
        min=n[0];
        for(int i=1;i<4;++i)
        {
            if(n[i]<min)
            min=n[i];
        }
        printf("The smallest number is %d\n", min);
    }
    else printf("The sum of numvers isn't zero:\n");
    return 0;
}
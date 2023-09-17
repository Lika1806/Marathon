#include <stdio.h>
int main()
{
    int n;
    int f1=0;
    int f2=1;
    int tmp;
    printf("Enter a number: ");
    scanf("%d", &n);
    if(n>0)
        do
        {
            printf("%d\n",f1);
            tmp=f2;
            f2+=f1;
            f1=tmp;
        }
        while(f1<=n);
    
    return 0;
}
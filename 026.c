#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    int n3=0;
    printf("input number N1: ");
    scanf("%d", &n1);
    printf("input number N2: ");
    scanf("%d", &n2);
    printf("input number N3: ");
    scanf("%d", &n3);
    int max=n1;
    if (n2>=n3){
        if(n2>max)
            max=n2;
    }
    else if (n3>max)
        max=n3;
    int res=1;
    for (int i=max/2;i>1;--i)
        {
            if (n1%i==0 && n2%i==0 && n3%i==0)
            {
                res=i;
                break;
            }        
        }
    printf("The largest common denominator is %d\n", res);    
    return 0;
}
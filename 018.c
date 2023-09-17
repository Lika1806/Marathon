#include <stdio.h>
int main()
{
    int a[]={0,1};
    int b[]={0,1};
    char output[6][6]={"False", "True"};
    int res=0;
    for (int i=0;i<=1;++i)
        for(int j=0;j<=1;++j)
        {
            res = a[i] | b[j] & !(b[j] | a[i]);
            printf("A-> %s\tB-> %s\tA||B && !(B||A)-> %s\n", output[a[i]],output[b[j]],output[res]);
        }
    return 0;
}
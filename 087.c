#include <stdio.h>
void swap (int* n1, int* n2)
{
    int tmp=*n1;
    *n1=*n2;
    *n2=tmp;
}
int main()
{
    int n1=0;
    int n2=0;
    printf("Enter numbers you want to switch: ");
    scanf("%d %d", &n1,&n2);
    swap(&n1,&n2);
    printf("%d %d\n", n1,n2);
       
    return 0;
}
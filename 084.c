#include <stdio.h>
#include <stdlib.h>
int main()
{
    int size;
    printf("input size : ");
    scanf("%d", &size);    
    int* p = (int*)(malloc(sizeof(int)*size));
    for(int i=0;i<size;++i)
        scanf("%d",p+i);
    for(int i=0;i<size;++i)
        printf("%d ",*(p+i));
    free(p);
    return 0;
}
#include <stdio.h>
int main()
{
	int a=1;
	int* p_a=&a;
	printf("a = %d\n", *p_a);
	return 0;
}
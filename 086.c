#include <stdio.h>
int main()
{
	int a=1;
	int b=5;
	int* p_a=&a;
	int* p_b=&b;
	int sum = *p_a+*p_b;
	int dif = *p_a-*p_b;
	printf("a + b = %d\n", sum);
	printf("a - b = %d\n", dif);
	return 0;
}
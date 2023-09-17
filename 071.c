#include <stdio.h>
int main()
{
	int a=1;
	char b='L';
	float c=3.3;
	int* p_a=&a;
	char* p_b=&b;
	float* p_c=&c;
	printf("p_a = %p\n", p_a);
	printf("p_b = %p\n", p_b);
	printf("p_c = %p\n", p_c);
	return 0;
}
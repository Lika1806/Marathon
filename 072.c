#include <stdio.h>
int main()
{
	int arr[]={3,4,5,6,8};
	int* first_element = arr;	
	int len =sizeof(arr)/4;
	for(int i=0;i<len;++i)
		printf("%d ", *(arr+i));
	printf("\n");
	return 0;
}
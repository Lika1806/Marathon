#include <stdio.h>
void swap(int* x, int* y)
{
	int tmp=*x;
	*x=*y;
	*y=tmp;
}
void sort(int* arr,int len)
{
	for(int i=0;i<len;i++)
	{
		for(int j=i-1;j>=0;j--)
		{
			if(*(arr+j+1)<*(arr+j))
				swap(arr+j+1, arr+j);
			else
				break;
		}
	}
}
int main()
{
    int arr[]={7,567,8,4,35,7,8,9,5,3,5};
	int len = sizeof(arr)/4;
	sort(arr,len);
	for(int i=0;i<len;++i)
	printf("%d ",arr[i]);
	printf("\n");
       
    return 0;
}
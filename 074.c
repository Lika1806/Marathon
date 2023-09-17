#include <stdio.h>
int main()
{
	int arr[]={1,3,7,6,5,2,4,12,54,78,9,0};
	int len = sizeof(arr)/4;
	int min1, min2;
	if(arr[0]<arr[1])
	{
		min1=arr[0];
		min2=arr[1];
	}
	else
	{
		min1=arr[1];
		min2=arr[0];
	}
	for(int i=2;i<len;++i)
	{
		if(arr[i]<min2)
		{
			if(arr[i]<min1)	
			{
				min2=min1;
				min1=arr[i];
			}
			else 
				min2=arr[i];
		}
	}
	printf("Second smallest element of the array is %d:\n", min2);
	return 0;
}
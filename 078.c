#include <stdio.h>
int main()
{
	int arr[]={2,3,4,5,6,8,7,6,6};	
	int len =sizeof(arr)/4;
	int tmp;
	int j=len;
	for(int i=0;i<j;++i)
	{
		if(arr[i]%2!=0)
		{
			while (j>i)
			{
				j--;
				if(arr[j]%2==0)
				{
					tmp = arr[i];
					arr[i]=arr[j];
					arr[j]=tmp;
					break;
				}
			}
		}
		
	}
	for(int i=0; i<len;++i)
		printf("%d ",arr[i]);
	printf("\n");
	return 0;
}
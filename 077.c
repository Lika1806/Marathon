#include <stdio.h>
int main()
{
	int arr[]={3,4,5,6,8,7};	
	int new_arr[]={[0 ... 5]=0};
	int len =sizeof(arr)/4;
	int j=-1;
	for(int i=0;i<len;++i)
		{
			if(arr[i]%2!=0)
			new_arr[++j]=arr[i];
		}
	for(int i=0; i<=j;++i)
		printf("%d ",new_arr[i]);
	printf("\n");
	return 0;
}
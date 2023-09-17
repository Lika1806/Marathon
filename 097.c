#include <stdio.h>
void change(int m[][3], int size)
{
	int j = size-1;
	int tmp;
	for(int i=0;i<size;++i)
		{
			tmp=m[i][i];
			m[i][i]=m[i][j];
			m[i][j--]=tmp;
		}

}
int main()
{
	int matrix[3][3] = {{1,2,3},
						{4,5,6},	
						{7,8,9}};
	int len=sizeof(matrix[0])/sizeof(int);
	change(matrix,len);
	for(int i=0;i<len;++i)
		{
			for(int j=0;j<len;++j)
				printf("%d ",matrix[i][j]);
			printf("\n");
		}
    return 0;
}
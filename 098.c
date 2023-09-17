#include <stdio.h>
int find_max(int m[][2], int r, int c)
{
	int max=m[0][0];
	for(int i=0;i<r;++i)
		{
			for(int j=0;j<c;++j)
			{
				if (m[i][j]>max)
				max=m[i][j];
			}
		}
	return max;
}
int main()
{
	int matrix[3][2] = {{1,2},
						{45,5},	
						{7,8}};
	int cols=sizeof(matrix[0])/sizeof(int);
	int rows =( sizeof(matrix)/sizeof(int))/cols;
	int max = find_max(matrix,rows,cols);
	printf("Largest element of the matrix is: %d\n",max);
    return 0;
}
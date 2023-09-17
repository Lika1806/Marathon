#include <stdio.h>
void find_min(int m[][2], int r, int c, int* i_r, int* i_c)
{
	int min=m[0][0];
	for(int i=0;i<r;++i)
		{
			for(int j=0;j<c;++j)
			{
				if (m[i][j]<min)
				{
					min=m[i][j];
					*i_r=i;
					*i_c=j;
				}
			}
		}
}
int main()
{
	int matrix[3][2] = {{1,2},
						{45,5},	
						{7,0}};
	int cols=sizeof(matrix[0])/sizeof(int);
	int rows =( sizeof(matrix)/sizeof(int))/cols;
	int index_row=0;
	int index_column=0;
	find_min(matrix,rows,cols,&index_row,&index_column);
	printf("indexes of smallest element are:\nrow: %d\ncolumn: %d\n",index_row,index_column);
    return 0;
}
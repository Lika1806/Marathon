#include <stdio.h>
int mat_sum(int m[][3], int size)
{
	int sum=0;
	int j = size-1;
	for(int i=0;i<size;++i)
	sum+=m[i][j--];
	return sum;
}
int main()
{
	int matrix[3][3] = {{1,2,3},
						{4,5,6},	
						{0,8,9}};
	int len=sizeof(matrix[0])/sizeof(int);
	int sum = mat_sum(matrix,len);
	printf("Sum of elements on first diagonal is %d\n",sum);
    return 0;
}
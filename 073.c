/*3. Տրված է երկու ամբողջ թվերի զանգվածներ։ Ստեղծել նոր զանգված, որը կլինի այդ զանգվածների կոնկատենացիան (կլինի այդ երկու զանգվածների պարունակությունը) և արտածել այդ զանգվածի պարունակությունը էկրանին։*/
#include <stdio.h>
int main()
{
	int arr1[]={3,4,2}, arr2[]={3,5,6,8,9};
	int len1 = sizeof(arr1)/4;
	int len2 = sizeof(arr2)/4;
	int new_len=len1+len2;
	int newarr[100];
	for(int i=0;i<len1;++i)
		newarr[i]=arr1[i];
	for(int j=0;j<len2;++j)
		newarr[j+len1]=arr2[j];
	for(int i=0;i<len1+len2;i++)
		printf("%d ", newarr[i]);
	printf("\n");
	return 0;
}
/*3. Տրված է երկու ամբողջ թվերի զանգվածներ։ Ստեղծել նոր զանգված, որը կլինի այդ զանգվածների կոնկատենացիան (կլինի այդ երկու զանգվածների պարունակությունը) և արտածել այդ զանգվածի պարունակությունը էկրանին։*/
#include <stdio.h>
int main()
{
	int arr1[]={3,5,7,4,2}, arr2[]={3,5,7,4,2};
	int len = sizeof(arr1)/4;
	int res=1;
	for(int i=0;i<len;++i)
		{
			if (arr1[i]!=arr2[i])
			{
				res=0;
				break;

			}
		}
	if(res)
	printf("The arrays are equal\n ");
	else
	printf("The arrays are NOT equal\n ");
	
	return 0;
}
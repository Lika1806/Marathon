#include <stdio.h>
int strchr(char* str, char f)
{
	int i=0;
	int index=-1;
	while(str[i]!='\0')
		{
			if(str[i]==f)
				{
					index=i;
					break;
				}
			++i;
		}
	return index;
}
int main()
{

    char str[200];
	char search;
	printf("Type a string: ");
	fgets(str, sizeof(str), stdin);
	printf("What charecter do you want to find? ");
	scanf(" %c",&search);
	int index = strchr(str,search);
	if (index!=-1)
	printf("That symbol has index is %d\n",index);
	else
	printf("Didn't find that symbol\n");
    return 0;
}
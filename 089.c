#include <stdio.h>
int strlen(char* string)
{
	int i=0;
	while(string[i]!='\0')
		++i;
	return i-1;
	
}
int main()
{

    char str[200];
	printf("Type a string: ");
	fgets(str, sizeof(str), stdin);
	int length = strlen(str);
	printf("The length of a string: %d\n",length);
    return 0;
}
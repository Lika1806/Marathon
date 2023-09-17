#include <stdio.h>
void strcp(char* string1, char* string2)
{
	int i=0;
	while(string1[i]!='\0')
		{
			string2[i]=string1[i];
			++i;
		}
	
}
int main()
{

    char str[200];
	char str2[200];
	printf("Type a string: ");
	fgets(str, sizeof(str), stdin);
	strcp(str,str2);
	printf("Here is a coppied string: %s",str2);
    return 0;
}
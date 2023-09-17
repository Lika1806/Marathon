#include <stdio.h>
void strcat(char* dstr, char* f)
{
	int i = 0;
	int j = 0;
	while(dstr[i]!='\0')
		{
			++i;
		}
	while(f[j]!='\0')
	{
		dstr[i++]=f[j];
		++j;
	}
}
int main()
{

    char str_dstr[200] = "Hello ";
	char str2[100]="World";
	strcat(str_dstr,str2);
	printf("New string: %s\n",str_dstr);
    return 0;
}
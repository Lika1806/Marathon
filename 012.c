#include <stdio.h>
int main()
{
    char text[100];
    printf("Input a text: ");
    int vowel=0;
    int cons=0;
    int i=0;
    while(1)
    {
        scanf("%c", &text[i]);
        if (text[i] == '\n' || i>=99) {
            text[i] = '\0';
            --i;
            break;
            }
        ++i;
    }
	int result = 0;
	for(int j=0;j<=i/2;++j)
	{
		if(text[j]!=text[i-j])
		{
			result=-1;
			break;
		}
	}
	if(result==0)
		printf("True: Is polindrome\n");
	else
		printf("False: Is not polindrome\n");
        return 0;
}
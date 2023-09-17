#include <stdio.h>
int find_word(char* string, int len, char* find, int len_f)
{

    int found =0;
    int k;int j;
    for(int i=0;i<len;++i)
    {

        if(string[i]==find[0])
        {
            k=i;
            j=0;
            while(string[k]==find[j])
            {
                ++k;
                ++j;
                if(j == len_f-1)
                {
                    found=1;
                    break;
                }
            }
            if(found==1)
            break;
        }
    }
    return found;

}
int main()
{
    char arr[]="Hello World";
    int len=sizeof(arr)-1;
    char search_word[]="World";
    int check_word = find_word(arr,len,search_word,sizeof(search_word));
    
    if (check_word)
    printf("Found a word '%s' in a string\n",search_word);
    else
    printf("DIDNT find a word '%s' in a string\n",search_word);

    
    
    return 0;
}
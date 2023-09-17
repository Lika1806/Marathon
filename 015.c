#include <stdio.h>
int main()
{
    int score=0;
    printf("Enter the score: ");
    scanf("%d", &score);
    if(score>=90 && score<=100)
        printf("Class A:\n");
    else if (score>=80 && score<=89)
        printf("Class B:\n");
    else if (score>=70 && score<=79)
        printf("Class C:\n");
    else if (score>=60 && score<=69)
        printf("Class D:\n");
    else if (score>=0 && score<=59)
        printf("Class E:\n");
    else
         printf("The input is invalid:\n");   
    return 0;
}
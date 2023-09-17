#include <stdio.h>
int main()
{
    int n1=0;
    int n2=0;
    char op;
    while(1)
    {
        printf("input an operation(+,-,*,/) or Q to quit: ");
        scanf(" %c", &op);
        if(op=='Q')
            break;
        if(op!='+' && op!='-' && op!='/' && op!='*')
        {
             printf("The symbol is invalid:\n");
             continue;
        }
        printf("input a first number: ");
        scanf("%d", &n1);
        printf("input a second number: ");
        scanf("%d", &n2);
        printf("%d %c %d = ",n1,op,n2 );
        switch(op)
        {
            case '+':
                printf("%d\n", n1+n2);
                break;
            case '*':
                printf("%d\n", n1*n2);
                break;
            case '/':
                {
                    if (n2!=0)
                        printf("%.2f\n", (float)n1/n2);
                    else
                        printf("You can't devide by zero:\n");
                    break;
                }
            case '-':
                printf("%d\n", n1-n2);
                break;
        }
    }
    return 0;
}
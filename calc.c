#include <stdio.h>

int main()
{
    long long num1;
    long long num2;
    char sym;

    scanf(" %lld", &num1);
    scanf(" %c", &sym);
    scanf(" %lld", &num2);

    switch(sym)
    {
        case '+':
            printf(" %lld", num1 + num2);
            break;

        case '-':
            printf(" %lld", num1 - num2);
            break;

        case '*':
            printf(" %lld", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
            {
                printf(" %lld", num1 / num2);

            }
            else
            {
                printf("Error");

            }
            break;
        default:
            printf("Error");
            
    }
    


    return 0;
}

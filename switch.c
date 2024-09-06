// WAP to make calculator using switch case

#include <stdio.h>

int main()
{
    char op;
    int a, b;
    printf("enter two numbers\n");
    scanf("%d %d", &a, &b);
    printf("enter the operator");
    scanf("%s", &op);
    switch (op)
    {
    case '+':
        printf("%d + %d = %d", a, b, a + b);
        break;
    case '-':
        printf("%d - %d = %d", a, b, a - b);
        break;
    case '*':
        printf("%d * %d = %d", a, b, a * b);
        break;
    case '/':
        printf("%d / %d = %d", a, b, a / b);
        break;
    default:
        printf("invalid operator , please enter operator ");
    }

    return 0;
}

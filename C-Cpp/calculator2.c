#include <stdio.h>
#include <stdlib.h>

int main ()
{
    double n1, n2;
    char op;
    printf("enter a number: ");
    scanf("%lf", &n1);
    printf("enter a modifier: ");
    scanf(" %c", &op);
    printf("enter a number: ");
    scanf("%lf", &n2);

    if(op == '+'){
        printf("%f %c %f = %f", n1, op, n2, n1 + n2);
    }else if (op == '-'){
        printf("%f %c %f = %f", n1, op, n2, n1 - n2);
    }else if (op == '*'){
        printf("%f %c %f = %f", n1, op, n2, n1 * n2);
    }else if (op == '/'){
        printf("%f %c %f = %f", n1, op, n2, n1 / n2);
    }else{
        printf("invalid operator");
    }

    return 0;
}
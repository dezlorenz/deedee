#include <stdio.h>
int main()
{
    int num1, num2, sum, diff, prod, quo;

    printf("Enter 1st number:");
    scanf("%d", &num1);

    printf("Enter 2nd number");
    scanf("%d", &num2);

    sum=num1+num2;
    diff=num1-num2;
    prod=num1*num2;
    quo=num1/num2;

    printf("Sum:%d\n", sum);
    printf("Difference:%d\n", diff);
    printf("Product:%d\n", prod);
    printf("Quotient:%d\n", quo);

    return 0;
}
#include <stdio.h>
int main()
{
    int a1, a2, a3, a4, a5, a6, sum, average;

    printf("Math Grade:");
    scanf("%d", &a1);

    printf("English Grade:");
    scanf("%d", &a2);

    printf("Science Grade:");
    scanf("%d", &a3);
    
    printf("Filipino Grade:");
    scanf("%d", &a4);
    
    printf("P.E Grade:");
    scanf("%d", &a5);
    
    printf("History Grade:");
    scanf("%d", &a6);


    sum=a1+a2+a3+a4+a5+a6;
    average=sum/6;

    printf("Average:%d", average);

    return 0;
}


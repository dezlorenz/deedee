#include <stdio.h>
int main()
{
    int a1, a2, a3, sum, average;

    printf("Kills 2 months:");
    scanf("%d", &a1);

    printf("Kills last month:");
    scanf("%d", &a2);

    printf("Kills this month:");
    scanf("%d", &a3);


    sum=a1+a2+a3;
    average=sum/3;

    printf("Average:%d", average);

    return 0;
}


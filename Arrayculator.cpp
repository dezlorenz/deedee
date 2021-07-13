#include <stdio.h>

void array_transfer (int number[]);

int main()
{
    int marks[10], i, n, sum = 0, average;
    
    printf("Size of Array:");
    scanf("%d", &n);
    
    if (n >= 5)
    if (n <= 10)
    
    for(i=0; i<n; ++i)
    {
        printf("Enter number %d:", i+1);
        scanf("%d", &marks[i]);
        sum += marks[i];
    }
    
    average = sum;
    printf("Sum all array elements:%d", average);
    
    return 0;
}


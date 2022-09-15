#include <stdio.h>

int main()
{
    float num1, num2, num3, totalNum, average;
    printf("Plase enter number 1:");
    scanf("%f", &num1);
    printf("Plase enter number 2:");
    scanf("%f", &num2);
    printf("Plase enter number 3:");
    scanf("%f", &num3);
    average = num1 + num2 + num3;
    totalNum = average / 3;
    printf("Average number is :%f", totalNum);

    return 0;
}
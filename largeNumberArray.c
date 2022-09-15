#include <stdio.h>

int main()
{
    int i, n;
    double arr[100];

    printf("Please enter a number between 1- 100 :");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        printf("Enter a number %d : ", i + 1);
        scanf("%lf", &arr[i]);
    }

    for (i = 1; i < n; i++)
    {
        if (arr[0] < arr[i])
            arr[0] = arr[i];
    }
    printf("The lasrgest number is %.2lf\n", arr[0]);

    return 0;
}
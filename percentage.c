#include <stdio.h>

int main()
{

    float yourMarks, totalMarks, percentage;
    printf("Please enter your marks:");
    scanf("%f", &yourMarks);
    printf("Plase enter your Total Marks:");
    scanf("%f", &totalMarks);

    percentage = yourMarks / totalMarks * 100;
    printf("Percentage :%f\n", percentage);

    return 0;
}
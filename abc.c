#include <stdio.h>

int main()
{
    int marks[3][3] = {{50, 60, 70}, {80, 90, 100}, {30, 40, 50}};
    char names[3][10] = {"Ali", "Bob", "Cat"};
    int i, j, total;
    float average;

    for (i = 0; i < 3; i++)
    {
        total = 0;
        for (j = 0; j < 3; j++)
        {
            total += marks[i][j];
        }
        average = total / 3.0;

        if (average >= 80)
            printf("%s Grade A avg=%.2f\n", names[i], average);
        else if (average >= 60)
            printf("%s Grade B avg=%.2f\n", names[i], average);
        else if (average >= 40)
            printf("%s Grade C avg=%.2f\n", names[i], average);
        else
            printf("%s Fail avg=%.2f\n", names[i], average);
    }

    int maxTotal = 0, top = 0;
    for (i = 0; i < 3; i++)
    {
        total = 0;
        for (j = 0; j < 3; j++)
        {
            total += marks[i][j];
        }
        if (total > maxTotal)
        {
            maxTotal = total;
            top = i;
        }
    }

    printf("Topper: %s with total %d\n", names[top], maxTotal);
    return 0;
}

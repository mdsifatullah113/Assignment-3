#include <stdio.h>

// Calculate total marks for a student
int calculateTotal(int marks[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
        total += marks[i];
    return total;
}

// Calculate average marks from total
float calculateAverage(int total, int size)
{
    return total / (float)size;
}

// Determine grade based on average marks
char getGrade(float average)
{
    if (average >= 80)
        return 'A';
    if (average >= 60)
        return 'B';
    if (average >= 40)
        return 'C';
    return 'F';
}

// Find index of student with highest total marks
int findTopper(int marks[3][3])
{
    int maxTotal = 0, topperIndex = 0;
    for (int i = 0; i < 3; i++)
    {
        int total = calculateTotal(marks[i], 3);
        if (total > maxTotal)
        {
            maxTotal = total;
            topperIndex = i;
        }
    }
    return topperIndex;
}

int main()
{
    int marks[3][3] = {
        {50, 60, 70},
        {80, 90, 100},
        {30, 40, 50}};                         // Marks of 3 students in 3 subjects
    char names[3][10] = {"Ali", "Bob", "Cat"}; // Student names

    // Print each student's grade and average
    for (int i = 0; i < 3; i++)
    {
        int total = calculateTotal(marks[i], 3);
        float average = calculateAverage(total, 3);
        char grade = getGrade(average);

        if (grade != 'F')
            printf("%s Grade %c average=%.2f\n", names[i], grade, average);
        else
            printf("%s Fail average=%.2f\n", names[i], average);
    }

    // Find and print the topper
    int topperIndex = findTopper(marks);
    int topperTotal = calculateTotal(marks[topperIndex], 3);
    printf("Topper: %s with total %d\n", names[topperIndex], topperTotal);

    return 0;
}

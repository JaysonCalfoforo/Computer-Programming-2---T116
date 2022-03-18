#include <stdio.h>
#define number 5
double average(int []);
int main()
{
    int grade[number], i;
    printf("Enter %d grades:", number);
    for(i = 0; i < number; i++)
    {
        scanf("%d", &grade[i]);
        if(grade[i] < 0 || grade[i] > 100)
        {
            printf("Not a valid input. Retry.\n");
            i = i - 1;
            continue;
        }
    }
    printf("average = %f", average(grade));

    return 0;
    }
    double average(int grade[])
{
    double average = 0;
    int i;
    for(i = 0; i < number; i++)
    {
        average += grade[i]; 
    }
    average /= (double) number;
    return average;
}
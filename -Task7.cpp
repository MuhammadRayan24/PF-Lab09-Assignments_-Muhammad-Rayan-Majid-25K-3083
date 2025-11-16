#include <stdio.h>
void input_Runs(int *arr, int size);
int total_Runs(int *arr, int size);
float average(int *arr, int size);
void highest_score(int *arr, int size, int *maxRun, int *playerIndex);

int main()
{
    int runs[11];
    int size = 11;
    int highest, index;
    input_Runs(runs, size);
    
    int total = total_Runs(runs, size);
    float avg = average(runs, size);
    highest_score(runs, size, &highest, &index);
    
    printf("\nTotal Runs = %d", total);
    printf("\nAverage Runs = %.2f", avg);
    printf("\nHighest Scorer: Player %d with %d runs\n", index + 1, highest);
    return 0;
}

void input_Runs(int *arr, int size)
{
    printf("Enter runs for %d players:\n", size);
    for(int i = 0; i < size; i++)
    {
        printf("Player %d: ", i + 1);
        scanf("%d", (arr + i));        
    }
}

int total_Runs(int *arr, int size)
{
    int total = 0;
    for(int i = 0; i < size; i++)
        total += *(arr + i);           
    return total;
}
float average(int *arr, int size)
{
    return total_Runs(arr, size) / (float)size;
}

void highest_score(int *arr, int size, int *maxRun, int *playerIndex)
{
    *maxRun = *arr;
    *playerIndex = 0;   
    for(int i = 1; i < size; i++)
    {
        if(*(arr + i) > *maxRun)
        {
            *maxRun = *(arr + i);
            *playerIndex = i;
        }
    }
}


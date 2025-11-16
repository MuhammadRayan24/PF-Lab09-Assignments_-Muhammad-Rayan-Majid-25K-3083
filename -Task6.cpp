#include <stdio.h>

void input_Attendance(int arr[][5], int students, int classes);
void calculate_Attendance(int arr[][5], int students, int classes, float percent[]);
void warnings(float percent[], int students);

int main()
{
    int students = 4;
    int classes = 5;

    int attendance[4][5];
    float percentage[4];

    input_Attendance(attendance, students, classes);
    calculate_Attendance(attendance, students, classes, percentage);
    warnings(percentage, students);

    return 0;
}

void input_Attendance(int arr[][5], int students, int classes)
{
    printf("\nEnter attendance (1 = present, 0 = absent)\n");

    for(int i = 0; i < students; i++)
    {
        printf("\nStudent %d:\n", i + 1);

        for(int j = 0; j < classes; j++)
        {
            printf("  Class %d: ", j + 1);
            scanf("%d", &arr[i][j]);

            if(arr[i][j] != 0 && arr[i][j] != 1)
            {
                printf("\nInvalid! Enter 1 or 0");
                j--;  
            }
        }
    }
}

void calculate_Attendance(int arr[][5], int students, int classes, float percent[])
{
    printf("\nAttendance Percentage:\n");

    for(int i = 0; i < students; i++)
    {
        int present = 0;
        for(int j = 0; j < classes; j++)
        {
            present += arr[i][j];
        }

        percent[i] = (present / (float)classes) * 100;
        printf("Student %d: %.2f%%\n", i + 1, percent[i]);
    }
}

void warnings(float percent[], int students)
{
    printf("\nWarnings for Low Attendance:\n");

    int warn = 0;

    for(int i = 0; i<students; i++)
    {
        if(percent[i]<75)
        {
            printf("Student %d is below 75%% attendance!\n", i + 1);
            warn = 1;
        }
    }

    if(!warn)
    printf("All students have satisfactory attendance.\n");
}


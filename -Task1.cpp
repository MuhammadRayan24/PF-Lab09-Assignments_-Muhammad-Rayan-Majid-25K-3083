#include<stdio.h>

void record(int wards[][5],int w , int b );
void count(int wards[][5],int w , int b, int*occupied , int*empty);
void display(int wards[][5],int w , int b);

int main()
{
    int wards[3][5];
    int occupied=0 , empty=0;
    int totalwards=3 , totalbeds=5;

    record(wards , totalwards , totalbeds);
    count(wards, totalwards , totalbeds, &occupied , &empty);
    display(wards, totalwards , totalbeds);

    printf("\n\n Total number of occupied beds:  %d",occupied);
    printf("\n Total number of empty beds   :  %d\n",empty);
    return 0;
}

void record(int wards[][5],int w , int b)
{
    printf("\n ---Enter bed status (1=occupied and 0=empty)---\n");
    for (int i=0; i<w; i++)
    {
        printf("\n Ward: %d\n", i+1);
        for (int j=0; j<b; j++)
        {
            printf(" Bed %d: ", j+1);
            scanf("%d",&wards[i][j]);

            if (wards[i][j]!=0 && wards[i][j]!=1)
            {
                printf(" Invalid Input! Enter 0 or 1.\n");
                j--;
            }
        }
    }
}

void count(int wards[][5],int w , int b, int*occupied , int*empty)
{
    *occupied = 0;
    *empty = 0;

    for (int i=0; i<w; i++)
    {
        for (int j=0; j<b; j++)
        {
            if (wards[i][j] == 1)
                (*occupied)++;
            else
                (*empty)++;
        }
    }
}

void display(int wards[][5],int w , int b)
{
    printf("\n---Bed Status---\n");

    for (int i=0; i<w; i++)
    {
        if(i==0) printf("\n General Ward:\n");
        if(i==1) printf("\n ICU Ward:\n");
        if(i==2) printf("\n Private Ward:\n");

        for (int j=0; j<b; j++)
        {
            printf(" Bed %d: %s\n", j+1, wards[i][j] ? "occupied" : "empty");
        }
    }
}


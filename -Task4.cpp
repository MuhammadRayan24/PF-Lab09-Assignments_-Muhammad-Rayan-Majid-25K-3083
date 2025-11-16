#include<stdio.h>
int main()
{
	int row=0,col=0,search=0;

	printf("\n Enter the number of rows: ");
	scanf("%d",&row);
	printf("\n Enter the number of columns: ");
	scanf("%d",&col);
		int arr[row][col];
	printf("\nEnter Elements of %dx%d are: ",row,col);
	for(int i=0; i<row; i++)
	{
		for(int j=0; j<col; j++)
		{
			scanf("%d", (*(arr + i) + j));
		}	
	}
	printf("\n Enter element to search: ");
	scanf("%d",&search);
	
	int found=0;
	
	for(int i=0; i<row; i++)
    {
        for(int j=0; j<col; j++)
        {
            if(*(*(arr + i) + j)==search)    
            {
                printf("\nElement %d found at Row %d, Column %d\n", search, i, j);
                found = 1;
            }
        }
    }

    if(!found)
        printf("\nElement %d not found.\n", search);
    return 0;
}

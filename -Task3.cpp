#include<stdio.h>
void replace(char arr[][50], int rows);
int vowel(char ch);
int main()
{
	int n;
	printf("\n Enter the number of strings: ");
	scanf("%d",&n);
	char words[n][50];
	printf("\n Enter %d strings: ", n);
	getchar();
	for(int i=0; i<n; i++)
	{
		printf("\n String %d: ",i+1);
		fgets(words[i],50,stdin);
	}
	printf("\n ---Original String---");
	for(int i=0; i<n; i++)
	{
    printf("\n String %d: ",i+1);
	printf("%s",words[i]);
    }
	replace(words,n);
	printf("\n ---Updated String---");
	for(int i=0; i<n; i++)
	{
	printf("\n String %d: ",i+1);
	printf("%s",words[i]);
    }
	return 0;
}
void replace(char arr[][50], int rows)
{
	for(int i=0; i<rows; i++)
	{
		for(int j=0; arr[i][j]!='\0'; j++)
		{
			if(vowel(arr[i][j]))
			{
				arr[i][j]='*';
			}
		}
	}
}
int vowel(char ch)
{
	char vowels[]="aeiouAEIOU";
	for(int i = 0; vowels[i] != '\0'; i++)
    {
        if(ch == vowels[i])
            return 1;
    }
    return 0;
}

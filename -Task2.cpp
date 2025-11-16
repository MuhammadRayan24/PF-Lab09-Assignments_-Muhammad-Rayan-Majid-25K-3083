#include<stdio.h>
void deposit(float*bal, int acc);
void withdraw(float*bal, int acc);
void display(float*bal, int size);
float average(float*bal,int size);
int main()
{
	float balance[5]={0};
	int choice , account;
	do{
	printf("\n ***BANK MENU*** ");
	printf("\n 1. Deposit ");
	printf("\n 2. Withdraw ");
	printf("\n 3. Balances ");
	printf("\n 4. Average Balance ");
	printf("\n 5. Exit Program ");
	printf("\n Enter Your Choice: ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("\n Enter account number (1-5): ");
			scanf("%d",&account);
			if(account>=1 && account<=5)
			deposit(balance, account-1);
			else 
			printf("\n Invalid Account Number!");
			break;
		case 2:
			printf("\n Enter account number(1-5): ");
			scanf("%d",&account);
			if(account>=1 && account<=5)
			withdraw(balance, account-1);
			else 
			printf("\n Invalid Account Number!");
			break;
		case 3:
			display(balance,5);
			break;
		case 4:
			printf("\nAverage Balance: %.2f",average(balance,5));
			break;
		case 5:
			printf("\n Exiting Program! ");
			break;
		default:
			printf("\n Invalid choice! ");
			break;
	}
    }
    while(choice!=5);
    return 0;
}
void deposit(float*bal, int acc)
{
	float amnt;
	printf("\n Enter the amount: ");
	scanf("%f",&amnt);
	*(bal+acc)+=amnt;
	printf("Amount deposited! New Balance = %.2f\n", *(bal + acc));
}
void withdraw(float*bal, int acc)
{
	float amnt;
	printf("\n Enter the amount: ");
	scanf("%f",&amnt);
	if(*(bal + acc)<amnt)
	{
		printf("\n Insufficient Balance!");
	}
	else 
	{
	*(bal + acc)-=amnt;
	printf("Amount withdrawn! New Balance = %.2f\n", *(bal + acc));
    }
}
float average(float*bal, int size)
{
	float sum=0;
	for(int i=0; i<size ; i++)
	{
		sum+=*(bal + i);
	}
	return sum/size;
}
void display(float*bal,int size)
{
	printf("\n ***ACCOUNT BALANCES***");
	for(int i=0; i<size; i++)
	{
		printf("\nAccount %d: %.2f",i+1,*(bal + i));
	}
}

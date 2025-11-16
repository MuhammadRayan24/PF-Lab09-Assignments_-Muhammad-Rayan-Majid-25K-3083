#include<stdio.h>
void print_data(void *ptr, char type)
{
switch(type)
{
	case 'i':
		printf("\n%d",*(int*)ptr);
		break;
	case 'f':
		printf("\n%f",*(float*)ptr);
		break;
	case 'c':
		printf("\n%c",*(char*)ptr);
		break;
	default:
		printf("Invalid type!");
		break;
}
}
int main()
{
	int product_id;
	float price;
	char category;
	
	printf("\n Enter Product ID: ");
	scanf("%d",&product_id);
	
	printf("\n Enter Price: ");
	scanf("%f",&price);
	
	printf("\n Enter Category: ");
	scanf(" %c",&category);
	
	printf("\nProduct ID: "); print_data(&product_id,'i');
	printf("\nPrice: "); print_data(&price,'f');
	printf("\nCategory: "); print_data(&category,'c');
	return 0;
}

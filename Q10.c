//10. Write a C program to take a number from the user and print its table. Ask the
//user if they want to print another table (Y/N). Repeat until the user enters N.

#include <stdio.h>

int main (void)
{
	int n, i;
	char choice;
	
	do{
		
		
		printf("Enter a number to print its table: ");
		scanf("%d", &n);
		
		for (i=1; i<=10; i++)
		{
			printf("%d x %d = %d\n", n, i, n*i);
		}
		
		printf("Do you want to print any other table(Y/N)?: ");
	    scanf(" %c", &choice);
		
		}
	while (choice =='Y' || choice =='y');
		
	printf("Program ended");
	return 0;
		
	
	
}

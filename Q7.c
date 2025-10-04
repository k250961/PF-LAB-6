#include <stdio.h>

int main (void)
{
	int correctPIN= 1234;
	int EnteredPIN;
	
	do
	{
		printf("Enter your PIN\n");
		scanf("%d", &EnteredPIN);
		
		if (EnteredPIN != correctPIN)
		{
			printf("Incorrect PIN, Try Again\n");
		}
		else
		{
			printf("Correct Password\n");
			break;
		}
	} while (correctPIN != EnteredPIN );
	
	return 0;
}

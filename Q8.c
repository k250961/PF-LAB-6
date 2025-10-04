//8. Write a C program to calculate the power of a number (e.g., 2^5 = 32).

#include <stdio.h>

int main(void)
{
	int n, power, i, ans=1;
	printf("Enter any number: ");
	scanf("%d", &n);
	

	
	printf("Enter power: ");
	scanf("%d", &power);
	
	for (i=1; i<=power; i++)
	{
		ans= ans*n;
		
		
	}
	printf("%d", ans);
}

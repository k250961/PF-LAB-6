#include <stdio.h>

int main (void)
{
	int n, prime=1;
	
	printf("Enter number: ");
	scanf("%d", &n);
	
	for (int i=2; i*i <= n; i++)
	{
		if (n%i==0){
			prime=0;
			break;
		}
	
	}
	
	if (prime)
	{
		printf("It is a prime number");
		
	}
	else
	{
		printf("It is a composite number");
	}
	
}

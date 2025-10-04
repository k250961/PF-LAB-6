#include <stdio.h>

int main (void)
{
	int n, rem,rev=0;
	
	printf("Enter any number to check whether it is a palindrome or not: ");
	scanf("%d", &n);
	
	int original=n;
	
	while (n>0)
	{
		rem= n%10;
		rev= rev*10+rem;
		n= n/10;
		
	}
	
	if (rev!=original)
	{
		printf("It is not a palindrome");
		
	}
	else
	{
		printf("It is a palindrome");
	}

}

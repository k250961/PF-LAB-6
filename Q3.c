#include <stdio.h>

int main(void)
{
	int n, rem, rev = 0, i;
	
	printf("Enter any number: ");
	scanf("%d", &n);
	
	for ( i = 1; n >= 1; i++)
	{
		rem = n%10;
		rev = rev * 10 + rem;
		
		n= n/10;
		
	}
	
	printf("Your reversed number is %d", rev);
	
	return 0;
}

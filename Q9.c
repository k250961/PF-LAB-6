//9. Write a C program to check whether a number is an Armstrong number or not.
//An Armstrong number is a number that is equal to the sum of cubes of its
//digits.

#include <stdio.h>

int main (void)
{
	int n, original, rem, x, y=0;
	
	printf("Enter number: ");
	scanf("%d", &n);
	
	original=n;
	
	while (n!=0)
	{
		rem= n%10;
		x= rem * rem * rem;
		y+=x;
		n= n/10;
		
	}
	
	if (y==original)
	{
		printf("Armstrong number");
	}
	else
	{
		printf("Not an Armstrong number");
	}

}

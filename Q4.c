//4. Write a C program to print the Fibonacci series up to n terms.
//Example: 0 1 1 2 3 5 8 …

#include <stdio.h>

int main (void)
{
	int n, a=0, b=1,i, c;
	
	printf("Enter number of terms: ");
	scanf("%d", &n);
	
	printf("Fabonacci Series: ");
	printf("%d %d", a,b);
	
	
	for (i=0; i<n-2; i++)
	{
		c= a+b;
		printf(" %d", c);
		a=b;
		b=c;
	}
	
	printf("\n"); 
    return 0;
}

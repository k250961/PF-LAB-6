//6. Write a C program to find the sum of even and odd numbers separately from 1
//to 20.

#include <stdio.h>

int main (void)
{
	
	int even=0, odd=0, i,j;
	
	for (i=2; i<=20; i+=2)
	{
		even+=i;
		
	 }
	 printf("SUM OF EVEN NUMBERS: %d\n", even);  
	 
	 for (j=1; j<=20; j+=2)
	{
		odd+=j;
		
	 }
	 printf("SUM OF ODD NUMBERS: %d", odd);  
}

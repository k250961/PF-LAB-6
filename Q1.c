#include <stdio.h>

int main (void)
{
	int n, ans=1;
	
	printf("Enter any number to find its factorial: ");
	scanf("%d", &n);
	
	
	for (int i = 1; i<=n; i++)
	{
		ans = ans * i;
		
	}
	printf("%d",ans);
	
	return 0;
}


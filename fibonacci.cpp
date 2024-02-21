#include<stdio.h>
int main()
{
	int firstterm=0,secondterm=1,nextterm,n;
	
	printf("Enter a number:");
	scanf("%d", &n);
	printf("Fibonacci series:\n");
	
	for(int i=0;i<n;i++)
	{
		printf("%d ", firstterm);
		nextterm = firstterm +secondterm;
		firstterm=secondterm;
		secondterm=nextterm;
	}
	return 0;
}

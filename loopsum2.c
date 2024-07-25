#include<stdio.h>
#include<conio.h>

void main()
{
	int i=1,n,fact=1;
	
	printf("Enter n :");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("fact = %d * %d;\t fact = %d\n",fact,i,fact*i);
		fact=fact*i;
		i++;
	}
	printf("fact is %d",fact);
}

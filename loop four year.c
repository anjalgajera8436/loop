#include<stdio.h>
#include<conio.h>

void main()
{
	int start,end;
	
	printf("Enter the first number:");
	scanf("%d",&start);
	printf("Enter the second number:");
	scanf("%d",&end);
	
	while(start<=end)
	{
		if(start%4==0)
		{
			printf("%d\n",start);
		}
		start++;
	}
}

#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,pos;
	int a[n];
	printf("\n\t**VALUE DELETION IN A ARRAY**\n");
	printf("\n\tEnter the number of elements:");
	scanf("%d",&n);
	printf("\n\tEnter the position:");
	scanf("%d",&pos);
	for (i=0;i<=n-1;i++)
	{
		scanf("%d",& a[i]);
	}
	printf("\nArray elements are:");
	for(i=0;i<=n-1;i++)
	{
		printf("%d,",a[i]);
	}
	printf("\b ");
	if(pos>=n+1 || pos<1)
	{
		printf("\nDeletion is impossible.");
	}
	else
	{
		for(i=pos-1;i<=n-2;i++)
		{
			a[i]=a[i+1];
		}
		n--;
		printf("\nThe new array elements are:");
		for(i=0;i<=n-1;i++)
		{
			printf("%d,",a[i]);
		}
		printf("\b ");
	}
}

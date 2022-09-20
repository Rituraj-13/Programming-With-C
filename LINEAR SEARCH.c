#include<stdio.h>
int main()
{
	int n, arr[10],a,b,i, flag =0, pos = 0;
	printf("Enter the no of elements you want to store: ");
	scanf("%d",&n);
	
	printf("Enter the elements: ");
	for(i=0 ; i<n ; i++)
	{
		scanf("%d",&arr[i]);
	}
	printf("Enter the no you want to search: ");
	scanf("%d",&a);
	
	for(i = 0; i<n ; i++)
	{
		if( arr[i] == a)
		{
			
			flag = 1;
			pos = i;
		}
		
	}
	
	if ( flag ==1 )
	{
		printf("Element found at position %d",pos);
	}
	else
	{
		printf("Element not found!");
	}
	return 0;
}

#include<stdio.h>
int main()
{
    int n,a,b,arr[20],i,largest,pos;
    printf("Enter how many elements you want to store :");
    scanf("%d",&n);

    for ( i = 0; i < n; i++)
    {
        printf("Enter the arr[%d]",i);
        scanf("%d",&arr[i]);
    }
    largest = arr[0];
    pos = 0;
    for ( i = 0; i <n; i++)
    {
        if (arr[i]>largest)
        {
            largest = arr[i];
            pos = i;
        }
        
    }
    printf("The largest element is: %d",largest);
    printf("\nThe position of the largest element is :%d ",pos);

    
}
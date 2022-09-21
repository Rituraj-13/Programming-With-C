#include<stdio.h>
int main()
{
    int a,b,arr[50],i,small,pos;
    printf("How many elements you want to store in the array: ");
    scanf("%d",&a);

    for ( i = 0; i < a; i++)
    {
        printf("Enter the arr[%d] : ",i);
        scanf("%d",&arr[i]);
    }
    small= arr[0];
    pos=0;

    for ( i = 0; i < a; i++)
    {
        if (arr[i]<small)
        {
            small = arr[i];
            pos = i;
        }
        
    }
    printf("The smallest number is %d",small);
    printf("\nThe position of the array is %d",pos);

    return 0;

}
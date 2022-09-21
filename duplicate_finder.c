#include<stdio.h>
int main()
{
    int n, arr[20], i,j, flag = 0;
    printf("Enter how many numbers you want to store ");
    for ( i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i = 0; i < n; i++)
    {
        for ( j = i+1; j < n; j++)
        {
            if (arr[i] == arr[j] && i != j)
            {
                flag = 1;
                printf("\nDuplicate numbers are found at %d and %d", i, j);
            }
            
        }
        
    }
    if (flag == 0)
    {
        printf("Duplicate numbers are not found");
    }
    
    return 0;

}
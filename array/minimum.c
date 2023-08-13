#include<stdio.h>
int main( )
{
    
    int n;
    printf("enter size of array :");
    scanf("%d",&n);
    int arr[n];
    int min = arr[0];

    for (int i=0;i<n;i++)
    {
        printf("enter element of array:");
        scanf("%d",&arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for (int i=0;i<n;i++)
    {
        if(min>arr[i])
        {
            min=arr[i];
        }
    }
    printf("\nminimum no. in array is %d",min);
}
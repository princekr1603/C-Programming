#include<stdio.h>
int main( )
{
    int arr[10]={89,2,3,45,34,23,65,76,13,24};
    int max=arr[0];
    for (int i=0;i<10;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    printf("maximum in array is %d",max);
}
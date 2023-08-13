#include<stdio.h>
int main( )
{
    int arr[5]={4,5,3,2,6};
    int sum=0;
    for (int i=0;i<5;i++)
    {
        sum=sum+arr[i];
    }
    printf("sum of array=%d",sum);
}
#include<stdio.h>
int main( )
{
    int arr[10]={23,4,5,12,33,55,64,76,87,10};
    int flag=0;
    int target = 3;
    for(int i=0;i<10;i++)
    {
        if(arr[i]==target)
        {
            printf("elments found at position : %d",i+1);
            flag =1;
        }
    }
        if(flag==0)
        {
            printf("elements not found");
        } 
    return 0;
}
#include<stdio.h>
int main()
{   
    int low=0;

    int upp=14;
    int arr[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int target=11;
    for (int i=0;i<15;i++)
    {
        int mid=(upp+low)/2;
        if(arr[mid]==target)
        {
            printf("elements are found at position: %d",mid+1);
            break;
        }
        else if(arr[mid]<target)
        {
            low=mid+1;
        }
        else if(arr[mid]>target)
        {
            upp=mid-1;
        }
        
    }
    return 0;

}
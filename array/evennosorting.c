#include<stdio.h>
#include<conio.h>
void main()
{
     int ar[100],i,n;

     printf("Enter the size of the array \n");
     scanf("%d",&n);

     printf("Enter the elements of the array \n");
     for(i=0; i<n; i++)
     {
           scanf("%d",&ar[i]);
     }

     printf("Even numbers in the array are - ");
     for(i=0;i<n;i++)
     {
           if(ar[i]%2==0)
           {
                 printf("%d \t",ar[i]);
           }
     }
}
#include<stdio.h>
int main()
{
    int n;
    printf("enter no.");
    scanf("%d",&n);
    for(int i=1 ;i<=n; i++)
    {
        for (int j=1;j<i;j++)
        {
            printf("%d",i);
        }
         printf("%d\n",i);
     }//for (int k=n-1; k>=1;k--)
    // {
    //     for (int r=n; r>=1;r++)
    //     {
    //         printf("%d",r);
    //     }
    //     printf("%d\n",k);

   // }
    
}
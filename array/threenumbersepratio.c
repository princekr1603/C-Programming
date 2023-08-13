#include<stdio.h>
int main( )
{
    int num[15]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    for (int i=0;i<15;i=i+3)//1,4,7,10,13
    { //i=0,3,6,9,12
        for(int j=i;j<i+3;j++)
        {   
            printf("%d",num[j]);
        }
        printf(",");

    }
}
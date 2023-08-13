#include<stdio.h>
int main()
{
   int num[26],temp;
   num[0]=5;
   num[24]=33;
   temp=num[0];
   num[0]=num[24];
   num[24]=temp;
   printf("num[0]=%d\nnum[24]=%d\n",num[0],num[24]);
   printf("after swapping num[0]=%d\n",num[0]);
   printf("after swapping num[24]=%d",num[24]);

}
  #include<stdio.h>
  int main()
  {
    int arr[5];//={1,2,3,4,5};
     for (int i=0;i<=4;i++)
     {  printf("enter element number %d\n",i+1);
        scanf("%d",&arr[i]);

     }
    for (int i=0;i<5;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
  }
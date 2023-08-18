#include<stdio.h>
int main(){
    int arr[7]={-10,-4,-200,-80,-19,-5,-12};
    int max = arr[0];
    int smax = arr[0];
    for(int i=0;i<=6;i++)
    {
        if(max<arr[i]){
            max =arr[i];
        }
    }
    for(int i=0;i<=6;i++)
    {
        if(max<arr[i]){
            max =arr[i];
        }
    }

   return 0;
}

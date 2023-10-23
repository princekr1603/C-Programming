#include<stdio.h>
int main(){
    int n;
    printf("enter an even number:");
    scanf("%d",&n);
    if(n%2!=0 || n<=0){
        printf("please enter even number\n");
        return 1;
    }
    printf("ascending even numbers up to %d:\n",n);
    for(int i=2;i<=n;i+=2){
        printf("%d ",i);
    }
    printf("\n");
    return 0;
}
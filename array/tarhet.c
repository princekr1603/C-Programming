#include<stdio.h>
int main(){
    int i,j;
    int arr[6]={2,4,1,4,8,6};
    for(i=0;i<6;i++){
        for(j=0;j<6;j++){
            if((arr[i]+arr[j])==8){
                if(i!=j){
                     printf("%d %d\n",i,j);

                }
           }
        }
    }
}
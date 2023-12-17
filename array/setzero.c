#include<stdio.h>
void main(){
    int n=3,m=4,x=-1;
    int copy[3][4]={{1,0,1,2},{3,1,4,3},{0,1,2,3}};
    int arr[3][4]={{1,0,1,2},{3,1,4,3},{0,1,2,3}};
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
                if(arr[i][j]==0){
                
                    for(int k=0;k<m;k++){
                        copy[i][k]=0;
                    }
                    for(int k=0;k<n;k++){
                        copy[k][j]=0;
                    }
                }
                  
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           
            printf("%d\t",copy[i][j]);
        }
        printf("\n");
    }
}
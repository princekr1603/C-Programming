if(arr[i][j]==0){
                    x=j;
                    for(int k=0;k<n;k++){
                        arr[k][j]=0;
                    }
                    for(int k=0;k<m;k++){
                        arr[i][k]=0;
                    }
                }
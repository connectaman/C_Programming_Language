#include<stdio.h>
int main(){
    int i=0,j=0;
    int arr[4][3]={{1,2,3},{2,3,4},{3,4,5},{4,5,6}};
//traversing 2D array
    for(i=0;i<4;i++){
        for(j=0;j<3;j++){
            printf("arr[%d] [%d] = %d \n",i,j,arr[i][j]);
        }//end of j
    }//end of i
    return 0;
}

//arr[0][0] = 1
//arr[0][1] = 2
//arr[0][2] = 3
//arr[1][0] = 2
//arr[1][1] = 3
//arr[1][2] = 4
//arr[2][0] = 3
//arr[2][1] = 4
//arr[2][2] = 5
//arr[3][0] = 4
//arr[3][1] = 5
//arr[3][2] = 6
#include<stdio.h>
int oddeven(int);
int main(){
    int num;
    printf("Enter the nuber :");
    scanf("%d",&num);
    int result= oddeven(num);
    if(result){
        printf("\n the number entered is a even");
    }
    else{
        printf("\n the number entered is not a even");
    }

    return 0;
}
int oddeven(int n){
    if(n%2==0){
        return 1;
    }
    else{
        return 0;
    }
}



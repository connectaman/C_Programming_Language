#include<stdio.h>
int main(){
    int number=0;
    printf("enter a number:");
    scanf("%d",&number);
    if(number%2==0){
        printf("%d is even number",number);
    }
    else{
        printf("%d is odd number",number);
    }
    return 0;
}


//enter a number:4
//4 is even number
//
//enter a number:5
//5 is odd number
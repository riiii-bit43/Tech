#include<stdio.h>
int main(){
    int num;
    printf("enter an integer:\n");
    scanf("%d",&num);

    if(num%2==0){
        printf("the ineteger entered is even.\n");
    }
    else{
        printf("the integer entered is odd.\n");
    }
    return 0;
}
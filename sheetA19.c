#include<stdio.h>
int main(){
    int n, i, sumEven = 0, sumOdd= 0;
    printf("enter a number: ");
    scanf("%d",&n);
    for(i = 1; i <= n; i++){
        if(i % 2 == 0){
            sumEven += i;
        }
        else{
            sumOdd += i;
        }
    }  
    printf("Sum of even numbers from 1 to %d = %d\n", n, sumEven);
    printf("Sum of odd numbers from 1 to %d = %d\n", n, sumOdd);

    return 0;
}
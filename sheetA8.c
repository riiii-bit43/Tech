#include<stdio.h>
int main(){
    int n, i=1;
    unsigned long long fact=1;
    printf("enter a number:\n");
    scanf("%d",&n);

    if(n<0){
        printf("Factorial of negative numbers is not defined.\n");
    }
    else{
        while(i <= n){
            fact = fact*i;
            i++;
        }
        printf("Factorial of %d = %llu\n", n, fact);
    }
    return 0;
}
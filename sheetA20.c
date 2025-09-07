#include<stdio.h>
int main(){
    int n, i, sum = 0;

    printf("enter a number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; n++){
        sum += i;
    }
    printf("Sum of series 1 + 2 + ... + %d = %d\n", n, sum);
    return 0;
}
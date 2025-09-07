#include<stdio.h>
int main(){
    int a,b;

    printf("enter two numbers:\n");
    scanf("%d %d", &a, &b);

    while(b != 0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    printf("GCD = %d\n", a);
    return 0;
}
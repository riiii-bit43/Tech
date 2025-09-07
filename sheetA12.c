#include<stdio.h>
int main(){
    int i;
    printf("even numbers between 1 nad 50 are:\n");
    for(i = 2; i <= 50; i += 2){
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
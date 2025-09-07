#include<stdio.h>
int main(){
    int i;
    printf("numbers from 1 to 100 except multiples of 5:\n");
    for(i =1; i <= 100; i++){
        if(i%5==0){
            continue;
        }
        printf("%d", i);
    }
    printf("\n");
    return 0;
}
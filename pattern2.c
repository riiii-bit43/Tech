#include<stdio.h>
int main(){
    int a[3][3];
    int size=0;
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            if(i>=j){
                size+= a[i][j];
            }
            printf("*");
        }
        printf("\t");
        printf("\n");
    }
    return 0;
}
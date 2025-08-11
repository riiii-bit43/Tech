#include<stdio.h>
int main(){
    int a[4][4];
    int count=1;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(i>j){
                printf("\t");
            }
            if(j>=i){
                printf("%d\t",count);
            }
        }
        count++;
        printf("\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int a,b,c;

    printf("enter integers:\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a>b && a>c){
        printf("%d is the largest integer entered\n", a);
    }
    else if(b>a && b>c){
        printf("%d is the largest integer entered\n", b);
    }
    else{
        printf("%d is the largest ineteger entered.\n", c);
    }
    return 0;
}
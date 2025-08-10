#include<stdio.h>
int main(){
    int n,rem,rev,a;
    a=n;
    printf("enter the number:\n");
    scanf("%d",&n);
    if(n!=0){
        rem=n%10;
        rev= rem+rev*10;
        n=n/10;
    }
    if(rev==a){
        printf("palindrome number\n");
    }
    else{
        printf("not a palindrome number\n");
    }
    return 0;
}
#include<stdio.h>
int main(){
    int n, original, rev=0, rem;

    printf("enter a number: ");
    scanf("%d", &n);

    original = n;
    while(n != 0){
        rem = n % 10;
        rev = rem * 10 + rem;
        n = n/10;
    }
    if(original == rev){
        printf("%d is a palindrome.\n", original);
    }
    else{
        printf("%d is not palindrome.\n", original);
    }
    return 0;
}
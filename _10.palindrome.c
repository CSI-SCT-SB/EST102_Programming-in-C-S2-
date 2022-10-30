#include <stdio.h>

int main() {
    int n, n1, rev = 0, rem;
    
    printf("Enter any number: ");
    scanf("%d", &n);    
    n1 = n;
    
    //logic
    while (n > 0){
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    
    if (n1 == rev){
        printf("Given number is a palindromic number"); 
    }
    else{
        printf("Given number is not a palindromic number"); 
    }    
    return 0; 
} 


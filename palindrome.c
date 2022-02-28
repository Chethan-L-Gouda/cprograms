#include<stdio.h>

void main(){
    int n,copy,rem,rev =0;
    printf("Enter the number :");
    scanf("%d",&n);
    copy = n;
    while(n!=0){
        rem = n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==copy)
        printf("the number %d is a palindrome number.",copy);
    else
        printf("The number %d is not a palindrome number.",copy);
}
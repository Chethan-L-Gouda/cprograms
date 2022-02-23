#include<stdio.h>

long int factorial(int f){
    long int fact = 1;
    for (int i = 1 ;i <= f; i++)
        fact = fact*i;
    printf("%ld\n",fact);
    return fact;
}

int main(){
    int f=1;
    printf("Enter the number whoose factorial you need to find : ");
    scanf("%d",&f);
    long int re = factorial(f);
    printf("The factorial of %d is %ld.",f,re);
    return 0;
}
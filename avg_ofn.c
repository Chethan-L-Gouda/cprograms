#include<stdio.h>

void main(){
    int arr[50],n;
    long sum =0,avg;
    printf("Enter the number of elements : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        sum = sum+arr[i];
    }
    avg = sum/n;
    printf("The sum of all numbers is %d and the average is %d",sum,avg);
}
#include<stdio.h>
#include<math.h>

void main(){
    int sign=-1,n;
    long int fact;
    double sinx=0,x,t;
    printf("Enter the value of x and n :");
    scanf("%lf,%d",&x,&n);
    for(int i=1;i<=n;i=i+2){
        sign=sign*(-1);
        fact=1;
        for(int j=i;j>1;j--)
            fact=fact*j;
        t=pow(x,i);
        sinx = sinx + ((t*(double)sign)/(double)fact);
    }
    printf("\nThe sin%lf till the power of %d is %lf",x,n,sinx);
}
#include<stdio.h>
#include<math.h>

void main(){
    double a,b,c,root1,root2,disc,iPart,rPart;
    printf("Enter the co-efficients of unknown :");
    scanf("%lf,%lf,%lf",&a,&b,&c);
    disc = b*b-(4*a*c);
    if(disc==0){
        root1 = -b/(2*a);
        root2 = root1;
        printf("The roots are real and equal.\nroot1 = root2 = %lf",root1);
    }
    else if (disc > 0){
        root1 = (-b + sqrt(disc))/(2*a);
        root2 = (-b - sqrt(disc))/(2*a);
        printf("The roots are real and distict.\nroot1 = %lf\nroot2 = %lf",root1,root2);
    }
    else{
        rPart = -b/(2*a);
        iPart = sqrt(-disc)/(2*a);
        printf("The roots are imaginary.\nroot1 = %lf + i%lf\nroot2 = %lf - i%lf",rPart,iPart,rPart,iPart);
    }
}
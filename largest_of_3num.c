#include<stdio.h>
void main(){
    int a, b,c,grtst_no;
    printf("Enter the numbers : ");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
        if(a>c)
            grtst_no=a;
        else
            grtst_no=c;
    else
        if(b>c)
            grtst_no=b;
        else
            grtst_no=c;
     printf("The number %d is the greatest of the three numbers.",grtst_no);
}
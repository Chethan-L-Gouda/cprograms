#include<stdio.h>

int main()
{
    long int fib[50];int nEle,i;
    printf("Enter the number of elements to be printed : ");
    scanf("%d",&nEle);
    fib[0]=0;fib[1]=1;
    if (nEle<=1)
        printf("%d\n",fib[0]);
    else if(nEle<=50){
        printf("%d\t%d\t",fib[0],fib[1]);
        for(i=2;i<nEle;i++){
            fib[i]=fib[i-1]+fib[i-2];
            printf("%ld\t",fib[i]);
        }
    }
    else if(nEle>50)
        printf("Series not avaible for more than 50.");
    return 0;
}

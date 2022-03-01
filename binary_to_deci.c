#include<stdio.h>
#include<math.h>
static int num = 0,position =0;
int binaryToDecimal(long int bin){
    if(bin == 0)
        return num;
    else
        if(bin%10==1)
            num = num +pow(2,position);
    position++;
    return binaryToDecimal(bin/10);
}
void main(){
    long int bi,deci;
    printf("Enter the binary number : ");
    scanf("%ld",&bi);
    deci = binaryToDecimal(bi);
    printf("The decimal value of %ld is %ld",bi,deci);
}
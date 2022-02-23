#include<stdio.h>

int main(){
    int num1,num2;float res;
    char choice;
    printf("Enter the expression : ");
    scanf("%d %c %d",&num1,&choice,&num2);

    switch(choice){
        case '+':
            res =num1+num2;
            break;
        case '-':
            res =num1-num2;
            break;
        case 'x':
            res =num1*num2;
            break;
        case '/':
            res =num1/num2;
            break;
        default :
            printf("No such operation avaivable .");
    }
    printf("The result of the operation %d %c %d is %f.",num1,choice,num2,res);
    return 0;
}
#include<stdio.h>

void main()
{
    char name[20];
    float units,charge=100;
    printf("Enter the name of the user and number of units consumed\n");
    scanf("%s%f",name,&units);
    if(units<=200)
        charge=charge+units*0.80;
    else if(units<=300)
        charge=charge+200*0.8+((units-200)*0.9);
    else
        charge=charge+200*0.8+100*0.9+((units-300)*1);
    if(charge>400)
        charge=charge+charge*0.15;
    printf("Name:%s\nunits:%f\ncharge:%f",name,units,charge);
}
#include<stdio.h>
#include<stdbool.h>

int length(char s1[20]){
    int len=0;
    int i=0;
    while(s1[i] != '\0'){
        i++;
    }
    len = i;
    return len;
}
int comp(char s1[20],char s2[20]){
    int l1 = length(s1);
    int l2 = length(s2),dif=0;
        int l = (l1>l2)?l1:l2;
        int i = 0;
        while(i<=l){
            if(s1[i] != s2[i]){
                dif = s1[i]-s2[i];
                break;
            }
            i++;
    }
    return dif;
}
void concat(char s1 [20],char s2[20]){
    char s[50];
    int l1 = length(s1);
    int l2 = length(s2);
    int l=l1+l2,i=0;
    for(i=0;i<l;i++)
        if(i<l1)
            s[i] = s1[i];
        else
            s[i]=s2[i-l1];
    printf("The concatenation of %s and %s gives %s\n",s1,s2,s);
}
void main(){
    char string1 [20];
    char string2 [20];
    int ch;
    bool status = true;
    do{
        printf("Enter th4 string operation :\n1-length\n2-concat\n3-compare\n4-to exit");
        scanf("%d",&ch);
        switch (ch)
        {
        case 1:
            printf("Enter the string : ");
            scanf("%s",string1);
            printf("The length of the string %s is %d\n");
            break;
        
        default:
            break;
        }
    } while (status);
    
}
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
void comp(char s1[20],char s2[20]){
    int l1 = length(s1);
    int l2 = length(s2);
    bool areSame = true;
    if(l1 == l2){
        int l =l1;
        int i = 0;
        while(i<=l){
            if(s1[i] != s2[i]){
                areSame = false;
                break;
            }
            i++;
        }
    }
    else
        areSame = false;
    if(areSame)
        printf("The two strings are same.\n");
    else
        printf("The two strings are different\n");
}
void concat(char s1 [20],char s2[20]){
    char s[50];
    int l1 = length(s1);
    int l2 = length(s2);
    int l=l1+l2,i=0;
    for(i=0;i<=l1;i++)
        if(s1[i] != '\0')
            s[i]=s1[i];
    for(int j=0;j<=l2;j++)
        s[l1 + j] = s2[j];
    printf("%s",s);
}
void main(){
    char string1 [20];
    char string2 [20];
    int n;
    printf("Enter the strings : ");
    scanf("%s%s",string1,string2);
    int l1 = length(string1);
    int l2 = length(string2);
    printf("The length of string1 is %d\n",l1);
    printf("The length of string2 is %d\n",l2);
    comp(string1,string2);
    concat(string1,string2);

}
#include<stdio.h>
#include<stdbool.h>
#include<string.h>

int main(){
    char name[100][20],searchKey[20];
    int nPer;
    printf("Enter the number of Names : ");
    scanf("%d",&nPer);
    printf("Enter the Names in alphabetical order : \n");
    for(int i = 0;i<nPer;i++)
        scanf("%s",&name[i]);
    printf("Enter the Name have have to search for :");
    scanf("%s",&searchKey);
    bool nameFound = false;
    int elePos,lB =0,uB=nPer-1;
    int curs;
    while(lB<=uB){
        curs = (lB+uB)/2;
        if(strcmp(name[curs],searchKey)==0)
            {
                elePos = curs;
                nameFound = true;
                break;
            }
        else if(strcmp(name[curs],searchKey)>0)
            uB = curs-1;
        else if(strcmp(name[curs],searchKey)<0)
            lB = curs+1;
    }
    if(nameFound)
        printf("The Name %s was found at Position : %d\n",searchKey,elePos+1);
    else
        printf("The Name  %s was not foumd in the array.\n",searchKey);
    
    return 0;
}
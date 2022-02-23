#include<stdio.h>
#include<stdbool.h>

int main(){
    int arr[100],nElem,searchKey;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&nElem);
    printf("Enter the array elements : ");
    for(int i = 0;i<nElem;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element have have tonsearch for :");
    scanf("%d",&searchKey);
    bool eleFound = false;
    int elePos,lB =0,uB=nElem-1;
    int curs;
    while(lB<uB){
        curs = (lB+uB)/2;
        if(arr[curs]==searchKey)
            {
                elePos = curs;
                eleFound = true;
                break;
            }
        else 
            if(arr[curs]>searchKey)
                uB = curs-1;
            else if(arr[curs]<searchKey)
                lB = curs+1;
    }
    if(eleFound)
        printf("The element %d was found at Position : %d\n",searchKey,elePos+1);
    else
        printf("The element %d was not foumd in the array.\n",searchKey);
    
    return 0;
}
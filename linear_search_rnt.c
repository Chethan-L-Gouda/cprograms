#include<stdio.h>
#include<stdbool.h>
#include<time.h>

int main(){
    int arr[100],nElem,searchKey;
    printf("Enter the number of elements in the array : ");
    scanf("%d",&nElem);
    printf("Enter the array elements : ");
    for(int i = 0;i<nElem;i++)
        scanf("%d",&arr[i]);
    printf("Enter the element have have tonsearch for :");
    scanf("%d",&searchKey);
    clock_t start = clock();
    bool eleFound = false;
    int elePos;
    for(int i =0 ;i<nElem;i++)
        if(arr[i]==searchKey){
            elePos = i;
            eleFound = true;
        }
    clock_t end =clock();
    if(eleFound)
        printf("The element %d was found at Position : %d\n",searchKey,elePos+1);
    else
        printf("The element %d was not foumd in the array.\n",searchKey);
    double t = (double)(end-start)/CLOCKS_PER_SEC;
    printf("The search completed in %lf sec",t);
}
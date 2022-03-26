#include<stdio.h>
#include<stdbool.h>
#include<time.h>

int arr[100],nElem,searchKey;

void sort(){
    int temp ;
    for (int j = nElem - 1; j > 1; j--)
        for (int i = 0; i < j; i++)
            if (arr[i] > arr[i + 1])
            {
                temp = arr[i + 1];
                arr[i + 1] = arr[i];
                arr[i] = temp;
            }
}

int binarySearch(int searchKey){
    bool eleFound = false;
    int elePos,lB =0,uB=nElem-1;
    int curs;
    while(lB<=uB){
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
    if(eleFound) return curs;
    else return -1;
}
void getArr(){
    printf("Enter the number of elements in the array : ");
    scanf("%d",&nElem);
    printf("Enter the array elements : ");
    for(int i = 0;i<nElem;i++)
        scanf("%d",&arr[i]);
}

void disArr(){
    for(int i=0;i<nElem;i++)
        printf("%d\t",arr[i]);
}
int main(){
    getArr();
    printf("\nThe array you have entered is : \n");
    disArr();
    sort();
    printf("\nThe elements of the array after sorting : \n");
    disArr();
    
    printf("\nEnter the element have have to search for :");
    scanf("%d",&searchKey);
    sort();
    clock_t start = clock();
    int elePos = binarySearch(searchKey);
    clock_t end = clock();
    if(elePos>0)
        printf("\nThe element %d was found at Position : %d\n",searchKey,elePos+1);
    else
        printf("anThe element %d was not foumd in the array.\n",searchKey);
    double tt = (double)(end-start)/CLOCKS_PER_SEC;
    printf("The value returned by binarySearch() is : %d\n",elePos);
    printf("The search completed in %lf\n",tt);
    return 0;
}
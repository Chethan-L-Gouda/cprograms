#include <stdio.h>

void main()
{
    int arr[100], nElem;
    printf("Enter the number of ellements.");
    scanf("%d", &nElem);
    printf("Enter the array elements : ");
    for (int i = 0; i < nElem; i++)
        scanf("%d", &arr[i]);
    int temp,pos;
    for(int i=0;i<nElem;i++){
        pos = i;
        for(int j=i+1;j<nElem;j++)
            if(arr[pos]>arr[j])
                pos = j;
        if(pos != i){
            temp = arr[pos];
            arr[pos] = arr[i];
            arr[i] = temp;
        }
    }
    printf("After sorting\n");
    for (int i = 0; i < nElem; i++)
        printf("%d\t", arr[i]);
}
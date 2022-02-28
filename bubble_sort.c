#include<stdio.h>

void main(){
    int arr[100],nElem;
    printf("Enter the number of ellements.");
    scanf("%d",&nElem);
    printf("Enter the array elements : ");
    for(int i = 0;i<nElem;i++)
        scanf("%d",&arr[i]);
    
    int temp;
	for(int j = nElem-1;j>1;j--)
		for(int i = 0;i<j;i++)
			if(arr[i]>arr[i+1])
			{
				temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
			}
    printf("After sorting\n");
    for(int i = 0;i <nElem;i++)
        printf("%d\t",arr[i]);
}

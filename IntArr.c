#include<stdio.h>

int arr[50],nElem;
void getElem(int f){
    printf("Enter the elements : ");
    int temp;
    for(int i = 0;i< f;i++){
        scanf("%d",temp);
        arr[i]=temp;
    }
}
void display(){
    for (int i = 0; i < nElem; i++)
        printf("%d",arr[i]);
}
int main(){
    
    printf("Enter the number of elements in the array : ");
    scanf("%d",&nElem);
    getElem(nElem);
    display();
    return 0;

}
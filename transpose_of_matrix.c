#include<stdio.h>

void main(){
    int mat1[50][50],mat2[50][50],m,n;

    printf("Enter the rows and columns of A :");
    scanf("%d%d",&m,&n);
    printf("Enter the elements of A : \n");
        for(int i = 0;i<m;i++)
            for(int j =0;j<n;j++)
                scanf("%d",&mat1[i][j]);

        for(int i =0;i<m;i++)
            for(int j = 0;j<n;j++)
                mat2[j][i]=mat1[i][j];
        printf("The tranpose of the given matrix A is : \n");
        for(int i = 0;i<n;i++){
            for(int j =0;j<m;j++)
                printf("%d\t",mat2[i][j]);
            printf("\n");
        }
}
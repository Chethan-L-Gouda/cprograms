#include<stdio.h>

void main(){
    int mat1[50][50],mat2[50][50],mat3[50][50],m,n,p,q;

    printf("Enter the rows and columns of A :");
    scanf("%d%d",&m,&n);

    printf("Enter the rows and columns of B :");
    scanf("%d%d",&p,&q);
    if(m==p && n==q){
        printf("Enter the elements of A : \n");
        for(int i = 0;i<m;i++)
            for(int j =0;j<n;j++)
                scanf("%d",&mat1[i][j]);

        printf("Enter the elements of B : \n");
        for(int i = 0;i<p;i++)
            for(int j =0;j<q;j++)
                scanf("%d",&mat2[i][j]);

        for(int i =0;i<m;i++)
            for(int j = 0;j<n;j++)
                mat3[i][j] = mat1[i][j]+mat2[i][j];

        printf("The sum  the matrix  A and B is : \n");
        for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++)
                printf("%d\t",mat1[i][j]);
            printf("\n");
        }
        printf("\t+\n");
        for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++)
                printf("%d\t",mat2[i][j]);
            printf("\n");
        }
        printf("\t=\n");
        for(int i = 0;i<m;i++){
            for(int j =0;j<n;j++)
                printf("%d\t",mat3[i][j]);
            printf("\n");
        }

    }
    else
        printf("This matrix cannot be Added\n");
}
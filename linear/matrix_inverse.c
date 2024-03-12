#include<stdio.h>
int main(){
    int mat[5][5],i,j;
    float determinant=0,k;
    printf("Enter elements of matrix row-wise:\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&mat[i][j]);
        }
    }
    printf("Given matrix is:\n");
    for(i=0;i<3;i++){
        printf("\n");
        for(j=0;j<3;j++){
            printf("%d",mat[i][j]);
        }
    }

    /*Finding Determinant*/
    for(i=0;i<3;i++){
        determinant= determinant + (mat[0][i]*(mat[1][(i+1)%3]*mat[2][(i+2)%3]-mat[2][(i+1)%3]*mat[1][(i+2)%3]));
        printf("\n Determinant: ",determinant);
        printf("\n Inverse of Matrix:\n");
        for(i=0;i<3;i++){
            for(j=0;j<3;j++){
                k= ((mat[(j+1)%3][(i+1)%3]*mat[(j+2)%3][(i+2)%3])- (mat[(j+1)%3][(i+2)%3]*mat[(j+2)%3][(i+1)%3]))/determinant;
                printf("%.2f\t",k);
            }
        }
    }
    return 0;
}
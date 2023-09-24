#include<stdio.h>
int main(){
    int r, c;
    printf("Enter the number of row : ");
    scanf("%d", &r);
    printf("Enter the number of column : ");
    scanf("%d", &c);

    int arr[r][c];
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("\nEnter Element no. A%d%d : ",i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMatris is ...........\n");
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    printf("\nTranspose of matrix is .....\n");
    for(int i=0; i<c; i++){
        for(int j=0; j<r; j++){
            printf("%d\t",arr[j][i]);
        }
        printf("\n");
    }
    return 0;

}
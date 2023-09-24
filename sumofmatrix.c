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
    int sum=0;
    for(int i=0; i<r; i++){
        for(int j=0; j<c; j++){
            sum += arr[i][j];
        }
    }
    printf("\nThe sum of all element is %d",sum);
}
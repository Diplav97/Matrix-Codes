#include<stdio.h>
int main(){
    int n, arr[n][n];
    printf("Enter the number of row. : ");
    scanf("%d",&n);
    printf("Enter all the element\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("\nEnter element no. A%d%d : ",i+1, j+1);
            scanf("%d",arr[i][j]);
        }
    }
    printf("\nTranspose of matrix is......\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n ;j++){
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
    }
    for(int i=0; i<n; i++){
        int j=0;
        int k=n-1;
        while(j<k){
            int temp=arr[i][j];
            arr[i][j]=arr[i][k];
            arr[i][k]=temp;
            j++;
            k--;
        }
    }
    printf("\nRotated matrix is......\n");
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}
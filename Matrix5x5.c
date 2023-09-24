#include<stdio.h>
#include<conio.h>
int main(){
    int i, j, arr[5][5];
    printf("Enter Element one by one");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("\nEnter Element A%d%d ", i+1, j+1);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("\nMatrix is printed........\n");
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
    return 0;    
}
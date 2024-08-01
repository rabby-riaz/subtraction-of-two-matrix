
#include <stdio.h>
#include<stdlib.h>

int main() {
    int row , col,matrix[77][77],mat1[55][55],mat2[55][55];
    printf("Enter row number : ");
    scanf("%d",&row);
     printf("Enter col number : ");
    scanf("%d",&col);



    for (int i = 0; i < row; i++) {
            for(int j = 0; j<col ; j ++){
                printf("1st Matrix number  [%d][%d] : ", i ,j);
                scanf("%d", &mat1[i][j]);
            }
    }

    for (int i = 0; i < row; i++) {
            for(int j = 0; j<col ; j ++){
                printf("2nd Matrix number  [%d][%d] : ", i ,j);
                scanf("%d", &mat2[i][j]);
            }
    }

    for (int i = 0; i < row; i++) {
            for(int j = 0; j<col ; j ++){
                matrix[i][j] = mat1[i][j] - mat2[i][j];

                printf(" %d ", matrix[i][j]);

            }
            printf("\n");
    }



    return 0;
}

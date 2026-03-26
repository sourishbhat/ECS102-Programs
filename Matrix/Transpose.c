#include <stdio.h>

int main(){
    int rows, columns;

    printf("Enter the Number of Rows: ");
    scanf("%d", &rows);

    printf("Enter the Number of Columns: ");
    scanf("%d", &columns);

    int matrix[rows][columns];


    printf("Enter the Elements of the Matrix: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("Elements at [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
            
        }
    }

    printf("The Original Matrix is: \n");
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }

    int transpose[columns][rows];

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            transpose[j][i] = matrix[i][j];
        }
    }

    printf("The Transposed Matrix is: \n");
    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++){
            printf("%d\t", transpose[i][j]);
        }
        printf("\n");
    }
}

    
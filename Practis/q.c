#include <stdio.h>

void printMatrix(int matrix[][3], int rows, int cols) {
    int p = rows;
            printf("%d ", *matrix[rows][cols]);
       
}

int main() {
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}};
    printMatrix(matrix, 2, 3);
    return 0;
}

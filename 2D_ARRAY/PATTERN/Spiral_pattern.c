#include<stdio.h>

void spiralFill(int m, int n, int a[m][n]) {
    int i, k = 0, l = 0;
    int val = 1;

    while (k < m && l < n) {
        
        for (i = l; i < n; ++i) {
            a[k][i] = val++;
        }
        k++;

        for (i = k; i < m; ++i) {
            a[i][n-1] = val++;
        }
        n--;

        if (k < m) {
            for (i = n-1; i >= l; --i) {
                a[m-1][i] = val++;
            }
        m--;
        }

        if (l < n) {
            for (i = m-1; i >= k; --i) {
                a[i][l] = val++;
            }
            l++;    
        }        
    }
}

void printMatrix(int m, int n, int a[m][n]) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d\t", a[i][j]);
            if (a[i][j] == 4 || a[i][j] == 5 || a[i][j] == 6) {
                printf("\n");
            }
        }
        printf("\n");
    }
}

int main() {
    int R = 4, C = 4;
    int a[4][4] = {0};

    spiralFill(R, C, a);
    printMatrix(R, C, a);
    
    return 0;
}

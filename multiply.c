/* Multiplying 2-D matrices */

#include <stdio.h>

int main() {
    int n, m; //store the size of a
    printf("Enter the number of rows and columns for matrix a: ");
    /* TODO: read the size of a */
    scanf("%d %d", &n, &m);
    


    int p, q; //store the size of b
    printf("Enter the number of rows and columns for matrix b: ");
    /* TODO: read the size of b */
    scanf("%d %d", &p, &q);

    


    int a[n][m], b[p][q], c[n][q]; //declaring 3 matrices

    /* TODO: if the sizes are compatible, read a and b from the user, multiply them and store the result in c, and print all three matrices.
             if the sizes are not compatible, print an error and exit the program. Return -1. 
             your output format must match the sample output shown in the pdf. */
    
    if (m != p) {
        printf("The given matrix sizes are not compatiable!");
        return -1;
    }

    printf("Enter %d values for matrix a: ", n*m);
    for (int i = 0; i < n * m; i++) {
        scanf("%d ", &a[i / m][i % m]);
    }

    printf("Enter %d values for matrix a: ", p*q);
    for (int i = 0; i < p * q; i++) {
        scanf("%d ", &b[i / q][i % q]);
    }


    
    for (int c = 0; c < q; c++) {
        for (int r = 0; r < n; r++) {
            for (int m2 = 0; m2 < n; m2++) {
                c[r][c] += a[r][m2] * b[m2][c];
            }
        }
    }

    printf("Matrix a:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix b:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Matrix c:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < q; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}

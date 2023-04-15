// Include header file
#include<stdio.h>
// Main function
int main(){
    // Declare variables
    int i, j, k, l, m, n, o, p, q, r, s, t, u, v, w, x, y, z;
    // Declare array
    int a[5][5];
    // Input array elements
    for(i=0; i<5; i++){
        for(j=0; j<5; j++){
            printf("Enter a[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    // Print array elements
    for(k=0; k<5; k++){
        for(l=0; l<5; l++){
            printf("%d\t", a[k][l]);
        }
        printf("\n");

}
    printf("BY Bhargvesh Bansotra \n 2022A1R065 ");
    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include "trans.c"

int* transpose(int *x, int n, int m);

int main(){
    int a = 2;
    int b = 3;
    int x[a][b];
    
    int mat[a][b];
    int l = 9;
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            x[i][j] = l;
            l--;
        }
    }
    // Print x
    for(int i = 0; i < a; i++){
        for(int j = 0; j < b; j++){
            printf("%d ", x[i][j]);
        }
        printf("\n");
    }
    
    transpose(*x, a, b);
    
}

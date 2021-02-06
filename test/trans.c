#include <stdio.h>
#include <stdlib.h>
int* transpose(int *x, int n, int m){
    int *y = malloc(sizeof(int) * (m*n));
    int ylen = 0;
    for(int i = 0; i < m; i+=1){
        for(int j = 0; j < m*n; j+=m){
            printf("%d ", *((x+i)+j));
            *(y+ylen) = *((x+i)+j);
            ylen++;
        }
        printf("\n");
    }
    /*
    for(int i = 0; i < m*n; i++){
        printf("%d ", *(y+i));
    }
    printf("\n");
    */
    return y;
}


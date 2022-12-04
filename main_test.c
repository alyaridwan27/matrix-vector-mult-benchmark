#include <stdio.h>
#include <stdlib.h>
#include "mylib/mylib.h"

int main(){
    int N, i;
    printf("enter the size of matrix:\n");
    scanf("%d", &N);
    
    if(N <= 1){
        printf("Error, N > 1\n");
        return 0;
    }
    else{
    int *matrix = (int *) malloc(N*N*sizeof(int));
    int *vector = (int *) malloc(N*sizeof(int));
    int *result = (int *) malloc(N*sizeof(int));

    printf("enter matrix values:\n");
    for(i = 0; i < N*N; i++){
        scanf("%d", &matrix[i]);
    }
    printf("matrix = ");
    printMat(matrix, N);

    printf("\nenter vector values:\n");
    for(i = 0; i < N; i++){
        scanf("%d", &vector[i]);
    }
    printf("\nvector = ");
    printVec(vector, N);

    matVecMult(matrix, vector, result, N);

    printf("\nresult = ");
    printVec(result, N);

    free(matrix);
    free(vector);
    free(result);


    }
    return 0;
}
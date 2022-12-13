#include <stdio.h>

void printMat(int* mat, int N){

    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        for(int j=0; j<N; j++){
            printf("%d,\t", mat[N*i+j]);
        }
    }
    printf("]\n");

}

void printVec(int* vec, int N){
    printf("[");
    for(int i=0; i<N; i++){
        printf("\n");
        printf("%d,\t", vec[i]);
    }
    printf("]\n");
}

void matVecMult(int* mat, int* vec, int* vecResult, int N){

    for(int i=0; i<N; i++){
        vecResult[i]=0;
        for(int j=0; j<N; j++){
            vecResult[i] += mat[N*i+j] * vec[j];
        }
    }

}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#include "mylib/mylib.h"

#define LOWER 1
#define UPPER 9

int generateRandomInt(int lower, int upper){
    return (rand() % (upper-lower+1)) + lower;
}

void initMat(int* mat, int N){
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            mat[N*i+j] = generateRandomInt(LOWER,UPPER);
        }
    }
}

void initVec(int* vec, int N){
    for(int i=0; i<N; i++){
        vec[i] = generateRandomInt(LOWER,UPPER);
    }
}

int main(void) {
    srand(time(0));

    int N = 2500;

    int* mat = (int *) malloc(N*N*sizeof(int));
    int* vec = (int *) malloc(N*sizeof(int));
    int* vecResult = (int *) malloc(N*sizeof(int));

    initMat(mat, N);
    initVec(vec, N);

    float startTime = (float)clock()/CLOCKS_PER_SEC;
    matVecMult(mat, vec, vecResult, N);
    float endTime  = (float)clock()/CLOCKS_PER_SEC;

    double timeTaken = endTime - startTime;

    printf("Time elapsed with N = %d : %f s\n", N, timeTaken);

    return 0;
}

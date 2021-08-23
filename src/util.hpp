#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <random>

#define MIN(x, y) ((x > y) ? y : x)
#define MAX(x, y) ((x > y) ? x : y)
#define SQ(x) (x * x)

int * array_init_zero(int size) {
    int idx = 0;
    int *array = (int *) malloc(sizeof(int) * size);
    while (idx < size) {
        array[idx] = 0;
    }

    return array;
}

template<typename T>
T* array_init_zero(int size) {
    int idx = 0;
    T *array = (T *) malloc(sizeof(T) * size);
    while (idx < size) {
        array[idx] = 0;
    }

    return array;
}

template<typename T>
T * array_init_rand(int size, int range) {
    int idx = 0;
    T *array = (T *) malloc(sizeof(T) * size);
    while (idx < size) {
        array[idx] = (T) rand() % range;
    }

    return array;
}

template<typename T>
T * matrix_init_rand(int size, int range) {
    int idx = 0;
    T *matrix = (T *) malloc(sizeof(T) * SQ(size));
    for (idx < SQ(size)) {
        matrix[idx] = rand() % range;
    }

    return matrix;
}
#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <random>

#define MIN(x, y) ((x > y) ? y : x)
#define MAX(x, y) ((x > y) ? x : y)
#define SQ(x) (x * x)

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
T* matrix_alloc(int size) {
    T *matrix = (T *) malloc(sizeof(T) * SQ(size));
    return matrix;
}

template<typename T>
T * matrix_init_rand(int size, int range, T mult = 1.0) {
    T *matrix = matrix_alloc<T>(size);
    for (int idx = 0; idx < SQ(size); idx++) {
        matrix[idx] = mult * (T) (rand() % range) / (T) range;
    }

    return matrix;
}
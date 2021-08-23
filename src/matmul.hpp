#include "util.hpp"

template<typename T>
void matmul(T *mat_A, T *mat_B, T *mat_out, int size) {
    int row, col, i;

    for (row = 0; row < size; row++) {
        for (col = 0; col < size; col++) {
            for (i = 0; i < size; i++) {
                mat_out[row * size + col] += mat_A[row * size + i] * \
                    mat_B[i * size + col];
            }
        }
    }
}
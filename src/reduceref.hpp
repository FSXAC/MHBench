#include "util.hpp"

float find_max_row_index(float *A, int h, int k, int size) {
    int imax = h;
    float val = fabs(A[h * size + k]);
    float imax_val = val;

    for (int i = h; i < size; i++) {
        val = fabs(A[i * size + k]);
        if (val > imax_val) {
            imax_val = val;
            imax = i;
        }
    } 

    return imax;
}

void normalize_row(float *A, int row, int start_col, int size) {
    float f = A[row * size + start_col];
    for (int i = start_col; i < size; i++) {
        A[row * size + j] /= f;
    }
}

void reduce(float *A, int size) {
    // pivots
    int h = 0, k = 0;

    while (h < size && k < size) {
        if (A[h * size + k] != 0.0) {
            normalize_row(A, h, k, size);
            for (int i = h + 1; i < size; i++) {
                float f = A[i * size + k] / A[h * size + k];
                A[i * size + k] = 0.0;
                for (int j = k + 1; j < size; j++) {
                    A[i * size + j] -= f * A[h * size + j];
                }
            }

            h++;
        }
        k++;
    }
}
#include "util.hpp"
#include "matsum.hpp"

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

int main(int argc, char *argv[]) {
    int size;
    if (argc == 2) {
        sscanf(argv[1], "%d", &size);
    } else {
        size = 3;
    }

    float *A = matrix_init_rand<float>(size, 10, 1.0/size);
    float *B = matrix_init_rand<float>(size, 10, 1.0/size);
    float *out = matrix_alloc<float>(size);
    matmul(A, B, out, size);

    float x = matsum<float>(out, size);
    printf("sum of product: %.2f\n", x);
}
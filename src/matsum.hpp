#include "util.hpp"

template<typename T>
T matsum(T *A, int size) {
    T sum;
    for (int i = 0; i < SQ(size); i++) {
        sum += A[i];
    }
    return sum;
}
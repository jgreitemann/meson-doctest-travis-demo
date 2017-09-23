#include "factorial.hpp"

long factorial(long N) {
    long res = 1;
    for (long i = 2; i <= N; ++i)
        res *= i;
    return res;
}

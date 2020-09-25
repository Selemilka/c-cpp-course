#include "math_utils.h"
#include "polynomial.h"
#include "stdio.h"
#include "test_utils.h"

/**
 * @brief macros for testing quadratic equasions ax^2 + b^x + c = 0
 *
 * @param [in] a coefficient for x^2
 * @param [in] b coefficient for x^1
 * @param [in] c coefficient for x^0
 *
 * @return prints in stderr info about test (passed/failed) and line
 */
#define QUADRATIC_ASSERT(a, b, c, number_of_roots, ...)             \
    {                                                               \
        double roots[2] = {__VA_ARGS__};                            \
        int passed = 1;                                             \
        double count_roots[2] = {0};                                \
        int count_number_of_roots =                                 \
            quadratic_solve((a), (b), (c), (count_roots));          \
        if (number_of_roots != count_number_of_roots) {             \
            passed = 0;                                             \
        } else {                                                    \
            for (int i = 0; i < count_number_of_roots; ++i) {       \
                if (!close_to(roots[i], count_roots[i])) {          \
                    passed = 0;                                     \
                }                                                   \
            }                                                       \
        }                                                           \
        if (passed) {                                               \
            fprintf(stderr, "Test passed on line %d.\n", __LINE__); \
        } else {                                                    \
            fprintf(stderr, "Test failed on line %d.\n", __LINE__); \
        }                                                           \
    }

int main() {
    QUADRATIC_ASSERT(3, -2, -2, 2, -0.5485837704, 1.2152504370);
    QUADRATIC_ASSERT(0, 0, 0, -1);
    QUADRATIC_ASSERT(0, 0, 1, 0);
    QUADRATIC_ASSERT(1, 0, 0, 1, 0);
    QUADRATIC_ASSERT(1e308, -1e308, -1e308, -2);
    QUADRATIC_ASSERT(0, 2, 1, 1, -0.5);
}

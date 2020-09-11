#include "stdio.h"
#include "quadratic.h"
#include "math.h"
#include "tests.h"
#include "math_utils.h"

int main() {
    double roots[2];
    int number_of_roots = quadratic_solve(3, -2, -2, roots);
    if (number_of_roots == -1) {
        printf("Infitnity\n");
    } else {
        printf("%d roots: ", number_of_roots);
        for (int i = 0; i < number_of_roots; ++i)
            printf("%.10f ", roots[i]);
        printf("\n");
    }
        
    ASSERT(number_of_roots == 2);
    ASSERT(close_to(roots[0], -1.2152504370d));
    ASSERT(close_to(roots[1],  0.5485837704d));

    return 0;
}

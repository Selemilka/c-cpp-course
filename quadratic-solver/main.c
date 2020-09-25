#include "math.h"
#include "math_utils.h"
#include "polynomial.h"
#include "stdio.h"

int main() {
    double a = NAN, b = NAN, c = NAN;
    printf("Input a, b, c for equasion ax^2 + bx + c = 0:\n");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Wrong input!\n");
        return 0;
    }

    double roots[2];
    int number_of_roots = quadratic_solve(a, b, c, roots);

    switch (number_of_roots) {
        case -2:
            printf("Error while counting arithmetics!\n");
            break;
        case -1:
            printf("There are infinity number of roots!\n");
            break;
        case 0:
            printf("0 roots.\n");
            break;
        default:
            printf("%d roots: ", number_of_roots);
            for (int i = 0; i < number_of_roots; ++i)
                printf("%.10f ", is_zero(roots[i]) ? 0 : roots[i]);
            printf("\n");
    }

    return 0;
}

#include "polynomial.h"

#include "limits.h"
#include "math.h"
#include "math_utils.h"

/**
 * @brief helper function for counting discriminant
 * for quadratic equasion ax^2 + bx + c = 0
 *
 * @param [in] a coefficient for x^2
 * @param [in] b coefficient for x^1
 * @param [in] c coefficient for x^0
 *
 * @return discriminant (no check isfinite)
 */
static double discriminant(double a, double b, double c);

// ax + b = 0
int linear_solve(double a, double b, double *roots) {
    if (close_to(a, 0)) {
        if (close_to(b, 0)) {
            return -1;
        } else {
            return 0;
        }
    }
    roots[0] = -b / a;
    return 1;
}

// ax^2 + bx + c = 0
int quadratic_solve(double a, double b, double c, double *roots) {
    if (!isfinite(a) || !isfinite(b) || !isfinite(c)) {
        return -2;
    }

    if (close_to(a, 0)) {
        return linear_solve(b, c, roots);
    }

    double d = discriminant(a, b, c);

    if (!isfinite(d)) {
        return -2;
    }
    if (d < 0) {
        return 0;
    }
    if (close_to(d, 0)) {
        roots[0] = -b / (2 * a);
        return 1;
    }
    roots[0] = (-b - sqrt(d)) / (2 * a);
    roots[1] = (-b + sqrt(d)) / (2 * a);
    return 2;
}

static double discriminant(double a, double b, double c) {
    return b * b - 4 * a * c;
}

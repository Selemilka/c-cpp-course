#include "math_utils.h"

#include "math.h"

const double EPSILON = 1e-10;

int close_to(double a, double b) {
    return fabs(a - b) < EPSILON;
}
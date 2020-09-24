#include "math_utils.h"

#include "math.h"

const double EPSILON = 1e-10;

int close_to(double a, double b) { return fabs(a - b) < EPSILON; }

int is_zero(double value) { return close_to(value, 0); }
#include "quadratic.h"

#include "math.h"
#include "math_utils.h"

int quadratic_solve(double a,
                    double b,
                    double c,
                    double* roots)
{
    if (close_to(a, 0))
    { 
        if (close_to(b, 0))
        { 
            return (c == 0) ? -1 : 0;
        }
        roots[0] = -c / b;
        return 1;
    }

    double discriminant = b * b - 4 * a * c;

    if (discriminant < 0)
    {
        return 0;
    }
    roots[0] = (b - sqrt(discriminant)) / (2 * a);
    roots[1] = (b + sqrt(discriminant)) / (2 * a);
    return 2;
}
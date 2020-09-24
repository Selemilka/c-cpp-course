/**
 * @file polynomial.h
 *
 * @brief library for solving polynomial equasions.
 * Currently can solve only linear and quadratic equasions.
 */

/**
 * @brief solves linear equasions ax + b = 0.
 *
 * @param [in] a coefficient for x^1
 * @param [in] b coefficient for x^0
 * @param [out] roots roots of equasion
 *
 * @return   -2  if error with ariphmetic occures
 *           -1  if there are infinity number of roots
 *         else  number of roots
 */
int linear_solve(double a, double b, double *roots);

/**
 * @brief solves quadratic equasions ax^2 + bx + c = 0.
 *
 * @param [in] a coefficient for x^2
 * @param [in] b coefficient for x^1
 * @param [in] c coefficient for x^0
 * @param [out] roots roots of equasion
 *
 * @return   -2  if error with ariphmetic occures
 *           -1  if there are infinity number of roots
 *         else  number of roots
 */
int quadratic_solve(double a, double b, double c, double *roots);
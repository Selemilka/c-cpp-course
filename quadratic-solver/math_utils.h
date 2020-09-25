/**
 * @file math_utils.h
 * @brief Common math operations
 */

/**
 * @brief Constant for double operations that
 * shows how precise operations should be
 */
const double EPSILON;

/**
 * @brief Checks that two numbers differs
 * not more than EPSILON
 *
 * @param [in] a first number
 * @param [in] b second number
 *
 * @return 1 if two numbers differs for less than
 * EPSILON else 0
 */
int close_to(double a, double b);

/**
 * @brief Checks that value is zero with EPSILON
 *
 * @param [in] value value for comparing with 0
 */
int is_zero(double value);
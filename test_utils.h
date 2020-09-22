/**
 * @file test_utils.h
 *
 * @brief utilities for testing
*/

/**
 * @brief macros for checking condition
 * writes in stderr result if testing
*/
#define ASSERT(condition) {                                   \
  if (condition)                                              \
    fprintf(stderr, "Test passed on line %d.\n", __LINE__);   \
  else                                                        \
    fprintf(stderr, "Test failed on line %d.\n", __LINE__);   \
}

#define ASSERT(condition) {                            \
  if (condition)                                       \
    fprintf(stderr, "Test passed.\n");                 \
  else                                                 \
    fprintf(stderr, "Test failed.\n");                 \
}

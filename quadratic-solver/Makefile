CC:=gcc
CFLAGS:=-Wall -Wextra -Wfloat-equal

.PHONY: run-tests

app: main.o polynomial.o math_utils.o
	@$(CC) -o $@ $^ -lm

run-tests: tests.o polynomial.o math_utils.o
	@$(CC) -o $@ $^ -lm
	./run-tests

main.o: main.c
	@$(CC) -c $(CFLAGS) -o $@ $<

polynomial.o: polynomial.c polynomial.h
	@$(CC) -c $(CFLAGS) -o $@ $<

math_utils.o: math_utils.c math_utils.h
	@$(CC) -c $(CFLAGS) -o $@ $<
	
tests.o: tests.c test_utils.h
	@$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -rf *.o hello
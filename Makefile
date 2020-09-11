CC:=gcc
CFLAGS:=-Wall

app: main.o quadratic.o math_utils.o tests.o
	@$(CC) -o $@ $^ -lm

main.o: main.c
	@$(CC) -c $(CFLAGS) -o $@ $<

quadratic.o: quadratic.c quadratic.h
	@$(CC) -c $(CFLAGS) -o $@ $<

math_utils.o: math_utils.c math_utils.h
	@$(CC) -c $(CFLAGS) -o $@ $<
	
tests.o: tests.c tests.h
	@$(CC) -c $(CFLAGS) -o $@ $<

clean:
	rm -rf *.o hello
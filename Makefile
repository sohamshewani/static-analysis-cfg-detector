```makefile
CC=gcc
CFLAGS=-Wall -Wextra -Werror -Iinclude
OBJS=$(wildcard src/*.o)

all: static-analysis-cfg-detector

static-analysis-cfg-detector: src/main.o $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

src/%.o: src/%.c src/%.h
	$(CC) $(CFLAGS) -c -o $@ $<

include/%.h:
	@echo 'Header file not found'

%.o: include/%.h
	@echo 'Header file not found'

# Unit tests
check: tests/testrunner
	$(MAKE) -C tests check

# Integration tests
integration:
	$(MAKE) -C tests integration

# Test runner
tests/testrunner: tests/test_runner

tests/test_runner:
	echo 'Test runner script not found'

# Clean
 clean:
	rm -f static-analysis-cfg-detector src/*.o tests/*.o

cleanall: clean
	cd tests && make clean

.PHONY: all clean cleanall check integration
```

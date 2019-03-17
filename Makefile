CFLAGS=-g -O2 -Wall -Wextra -Isrc -rdynamic -DNDEBUG

TARGET=ex32
OBJECTS=libex32.o

all: $(TARGET) tests

$(TARGET): $(OBJECTS)

build: 
	@mkdir -p build 
	@mkdir -p bin

# The Unit Tests
.PHONY: tests
tests: CFLAGS += $(TARGET)
    #    sh ./runtests.sh

clean:
	find . -name "*.gc*" -exec rm {} \;
	rm -rf `find . -name "*.dSYM" -print`
	rm -f *.o ex[1-9][1-9]
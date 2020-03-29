include ../Make.include

all: test

test: runtest

LIBPATH += -L../src/
INCLUDE += -I../src/ -I../src/MersenneTwister/
LIBS += -Wl,-Bstatic $(LIBPATH) -lpimc -Wl,-Bdynamic -lm

runtest: ../src/libpimc.a \
   runtest_random

buildtest: ../src/libpimc.a \
   buildtest_random

include make.random

../src/libpimc.a:
	(cd ../src/; make libpimc.a)

.PHONY: test clean distclean

clean:
	rm -f *.o *.mod *.MOD

distclean: clean
	rm -f *.x

include ../Make.include

LIBS += -lm 
INCLUDE += -I./MersenneTwister/

OUTLIB = libpimc.a

all: $(OUTLIB)

$(OUTLIB): MersenneTwister/MT_random.o
	ar rvcs $@ $^

# Build the Mersenne Twister Submodule
MersenneTwister/MT_random.o: MersenneTwister/Make.include \
                             MersenneTwister/MT_random.c MersenneTwister/MT_random.h
	(cd MersenneTwister; make)

MersenneTwister/Make.include: ../Make.include
	cp $< $@

.PHONY: clean distclean

clean:
	-rm -f *.o
	-rm -f mp_constants.c
	(cd MersenneTwister; make clean)

distclean: clean
	-rm *.x $(OUTLIB)
	(cd MersenneTwister; make distclean)


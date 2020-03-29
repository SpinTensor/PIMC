include ../Make.include

LIBS += -lm 
INCLUDE += -I./MersenneTwister/

OUTLIB = libpimc.a

all: $(OUTLIB)

$(OUTLIB): MersenneTwister/MT_random.o periodic.o monte_carlo.o energy.o \
    mp_constants.o path_construct.o permtables.o \
    periodic_table.c
	ar rvcs $@ $^

periodic.o: periodic.c periodic.h
	$(CC) $(CCFLAGS) $(CCWFLAGS) $(INCLUDE) -c $<

monte_carlo.o: monte_carlo.c mc_types.h periodic.h permtables.h
	$(CC) $(CCFLAGS) $(CCWFLAGS) $(INCLUDE) -c $<

energy.o: energy.c
	$(CC) $(CCFLAGS) $(CCWFLAGS) $(INCLUDE) -c $<

mp_constants.o: mp_constants.c
	$(CC) $(CCFLAGS) $(CCWFLAGS) $(INCLUDE) -c $<

mp_constants.c: generate_mp_constants.x
	./$< > $@

generate_mp_constants.x: generate_mp_constants.c
	$(CC) $(CCFLAGS) $(CCWFLAGS) $(INCLUDE) -o $@ $^

path_construct.o: path_construct.c MersenneTwister/MT_random.h periodic.h
	$(CC) $(CCFLAGS) $(CCWFLAGS) $(INCLUDE) -c $<

permtables.o: permtables.c
	$(CC) $(CCFLAGS) $(CCWFLAGS) $(INCLUDE) -c $<

periodic_table.o: periodic_table.c
	$(CC) $(CCFLAGS) $(CCWFLAGS) $(INCLUDE) -c $<

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


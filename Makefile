include Make.include

.PHONY: tests

tests:
	(cd $@; make)

clean:
	(cd src; make clean)
	(cd tests; make clean)

distclean: clean
	(cd src; make distclean)
	(cd tests; make distclean)

PREFIX?=/usr/local/Cellar
CFLAGS=-g -Wall -I${PREFIX}/apr/1.6.5/libexec/include/apr-1 -I${PREFIX}/apr-util/1.6.1_1/libexec/lib/apr-util-1
LDFLAGS=-L${PREFIX}/apr/lib -lapr-1 -pthread -laprutil-1

all: devpkg

devpkg: bstrlib.o db.o shell.o commands.o

install: all
	install -d $(DESTDIR)/$(PREFIX)/bin/
	install devpkg $(DESTDIR)/$(PREFIX)/bin/

clean:
	rm -f *.o
	rm -f devpkg
	rm -rf *.dSYM
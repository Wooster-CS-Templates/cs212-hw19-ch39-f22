BINARIES = myls mystat mytail

all: $(BINARIES)

clean:
	rm -f $(BINARIES)

myls: myls.c
	gcc -o myls myls.c -Wall

mystat: mystat.c
	gcc -o mystat mystat.c -Wall

mytail: mytail.c
	gcc -o mytail mytail.c -Wall

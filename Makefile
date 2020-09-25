CC = g++
CCFLAGS = -Wall -g

assignment03: assignment03.cc
	$(CC) $(CCFLAGS) assignment03.cc -o assignment03.exe

run:
	./assignment03.exe

clean:
	-rm assignment03.exe

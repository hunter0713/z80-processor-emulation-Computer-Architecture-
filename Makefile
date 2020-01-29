#

z80: main.o z80.o
	g++ -o z80 main.o z80.o

main.o: main.cpp z80.h z80.cpp 
	g++ -c main.cpp

z80.o: z80.cpp z80.h 
	g++ -c z80.cpp

clean:
	rm *.o z80

all: gradecalc

gradecalc: main.o gradecalc.o
	g++ main.o gradecalc.o -o gradecalc

main.o: main.cpp gradecalc.h
	g++ -c main.cpp

gradecalc.o: gradecalc.cpp gradecalc.h 
	g++ -c gradecalc.cpp

clean:
	rm -rf *.o gradecalc
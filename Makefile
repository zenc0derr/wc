output: wc.o
	g++ wc.o -o wc

wc.o: wc.cpp
	g++ -c wc.cpp
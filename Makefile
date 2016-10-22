makefile:
all:vector_sample

clean:
	rm -rf vector_sample.o vector_sample

vector_sample:vector_sample.o
	g++ -g -o vector_sample vector_sample.o

vector_sample.o:vector_sample.cpp
	g++ -g -c vector_sample.cpp

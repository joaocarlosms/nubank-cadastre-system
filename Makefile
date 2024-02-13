all: tst

tst: main.o BinaryTreeAVL.o Node.o Login.o
	g++ -o tst main.o BinaryTreeAVL.o Node.o Login.o

main.o: main.cpp
	g++ -c main.cpp

BinaryTreeAVL.o: BinaryTreeAVL.cpp BinaryTreeAVL.h
	g++ -c BinaryTreeAVL.cpp

Node.o: Node.cpp Node.h
	g++ -c Node.cpp

Login.o: Login.cpp Login.h
	g++ -c Login.cpp

clean:
	rm *.o tst
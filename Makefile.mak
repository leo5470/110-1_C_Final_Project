TicTacToe: main.o judge.o
	gcc -o TicTacToe main.o judge.o
main.o: main.c judge.h
	gcc -c main.c
judge.o: judge.c judge.h
	gcc -c judge.c
a.out: main.o gpa.o
	gcc main.o gpa.o
main.o: main.c student.h gpa.h
	gcc -c main.c
gpa.o: gpa.c gpa.h
	gcc -c gpa.c
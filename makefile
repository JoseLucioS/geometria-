#Makefile for "Lab1 - Questão 1" C++ application
#Created by Hilton and Lúcio 10/03/2019

PROG = Questao1
CC = g++
CPPFLAGS = -O0 -g -Wall -pedantic
OBJS = main.o areas.o perimetros.o volumes.o

$(PROG) : $(OBJS)
	$(CC) -o $(PROG) $(OBJS)

main.o :
	$(CC) $(CPPFLAGS) -c main.cpp

areas.o :
	$(CC) $(CPPFLAGS) -c areas.cpp

perimetros.o :
	$(CC) $(CPPFLAGS) -c perimetros.cpp

volumes.o :
	$(CC) $(CPPFLAGS) -c volumes.cpp



OBJECTS= main.o box.o checkerboard.o

main: main.o box.o checkerboard.o
	g++ -o main $(OBJECTS)

main.o: main.cpp box.h checkerboard.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp

clean:
	rm -f $(OBJECTS) main

help:
	@echo "Targets:"
	@echo " main"

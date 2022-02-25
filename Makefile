OBJECTS= main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o

main: main.o box.o checkerboard.o cross.o lower.o upper.o trapezoid.o
	g++ -o main $(OBJECTS)

main.o: main.cpp box.h checkerboard.h cross.h lower.h upper.h trapezoid.h
	g++ -c main.cpp

box.o: box.cpp box.h
	g++ -c box.cpp

checkerboard.o: checkerboard.cpp checkerboard.h
	g++ -c checkerboard.cpp

cross.o: cross.cpp cross.h
	g++ -c cross.cpp

lower.o: lower.cpp lower.h
	g++ -c lower.cpp

upper.o: upper.cpp upper.h
	g++ -c upper.cpp

trapezoid.o: trapezoid.cpp trapezoid.h
	g++ -c trapezoid.cpp

clean:
	rm -f $(OBJECTS) main

help:
	@echo "Targets:"
	@echo " main"

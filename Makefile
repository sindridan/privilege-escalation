nakatomi: main.o Person.o Database.o
	g++ -std=c++0x -Wall main.o Person.o Database.o -o nakatomi

main.o: main.cpp
	g++ -c main.cpp

Person.o: Person.cpp Person.h
	g++ -c Person.cpp

Database.o: Database.cpp Database.h
	g++ -c Database.cpp

clean:
	rm *.o output
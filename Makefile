Lab4: main.o PreconditionViolationException.o
	g++ -g -std=c++11 -Wall -o Lab4 main.o PreconditionViolationException.o

main.o: main.cpp StackInterface.h Node.h Node.hpp Stack.h Stack.hpp PreconditionViolationException.h PreconditionViolationException.cpp
	g++ -g -std=c++11 -Wall -c main.cpp

PreconditionViolationException.o: PreconditionViolationException.h PreconditionViolationException.cpp
	g++ -g -std=c++11 -Wall -c PreconditionViolationException.cpp

clean:
	rm *.o Lab4
	echo clean done

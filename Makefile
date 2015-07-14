CXX = g++
CXXFLAGS = -Wall -g -MMD -std=c++0x -O
OBJECTS = Main.o View.o Model.o Controller.o Subject.o Observer.o
CPP = ${OBJECTS:.o=.cpp}
HEADERS = ${OBJECTS:.o=.h}
DEPENDS = ${OBJECTS:.o=.d}
EXEC = mvc

${EXEC}: ${OBJECTS}
	${CXX} ${OBJECTS} ${CXXFLAGS} -o ${EXEC}

clean:
	rm -rf ${DEPENDS} ${OBJECTS} ${EXEC}

-include ${DEPENDS}

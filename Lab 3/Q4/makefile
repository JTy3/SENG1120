CC=g++
CFLAGS=-c -Wall -std=c++98 
LDFLAGS=
SOURCES=Point.cpp main.cpp
OBJECTS=$(SOURCES:.cpp=.o)
EXECUTABLE=point

all: $(SOURCES) $(EXECUTABLE)
	
$(EXECUTABLE): $(OBJECTS)
	$(CC) $(LDFLAGS) $(OBJECTS) -o $@

%.o : %.cpp
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o core

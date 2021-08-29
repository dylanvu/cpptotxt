CXX = g++

CXXFLAGS= -std=c++17 -g -Wall

# Edit this to be your singular file name. Do not have .cpp!
PROGRAMNAME = txt

all: $(PROGRAMNAME)

$(PROGRAMNAME): $(PROGRAMNAME).o
	$(CXX) $(CXXFLAGS) -o $(PROGRAMNAME) $(PROGRAMNAME).o

$(PROGRAMNAME).o: $(PROGRAMNAME).cpp
	$(CXX) $(CXXFLAGS) -c $(PROGRAMNAME).cpp

clean:
	#del *.exe *.o
	rm -f *.o *.exe
CC = g++ -std=c++17
CFLAGS  = -g -Wall
RM = rm

OPENCV = `pkg-config --cflags --libs opencv4`

LIBS = $(OPENCV) $(XLIB)

all: main run

main: imageToAscii.o
	$(CC) $(CFLAGS) -o main imageToAscii.o $(LIBS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c -o $@ $< $(LIBS)

run:
	./main
	
clean:
	rm *.o main

CC=g++

CFLAGS=-c -Wall

all: surf

surf: main.o fileManager.o logicMotor.o playersRanker.o
				$(CC) main.o fileManager.o logicMotor.o playersRanker.o -o surf

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

fileManager.o: fileManager.cpp
	$(CC) $(CFLAGS) fileManager.cpp

logicMotor.o: logicMotor.cpp
	$(CC) $(CFLAGS) logicMotor.cpp

playersRanker.o: playersRanker.cpp
	$(CC) $(CFLAGS) playersRanker.cpp

clean:
	rm -rf *o surf

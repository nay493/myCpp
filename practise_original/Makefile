CC=g++
CFLAGS=-Wall
OTHERS=-D way1 #way2
#SOURCES= test2.cpp file3.cpp

target:test1.cpp test2.cpp file3.cpp file4.cpp file5.cpp file6.cpp file8.cpp
	$(CC) -o target test1.cpp test2.cpp file3.cpp file4.cpp file5.cpp file6.cpp file8.cpp $(CFLAGS) $(OTHERS)

#target: test1.cpp $(SOURCES)
#	$(CC) -o test1.cpp $(SOURCES) $(CFLAGS)

clean:
	rm -rf *.o

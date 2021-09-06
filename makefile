main: driver.o word_analyzer.o 
	g++ -std=c++11 -o text_analyzer driver.o word_analyzer.o

driver.o: driver.cpp word_analyzer.h
	g++ -std=c++11 -c driver.cpp

word_analyzer.o: word_analyzer.cpp word_analyzer.h
	g++ -std=c++11 -c word_analyzer.cpp

clean: 
	rm *.o
	rm *.exe
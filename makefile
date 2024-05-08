build: main.cpp HashTable.cpp
	g++ -std=c++11 main.cpp HashTable.cpp -o build

test: build
	g++ -std=c++11 test.cpp -o test
	./test

clean:
	rm build

run: 
	./build
build: main.cpp HashTable.cpp
	g++ main.cpp HashTable.cpp -o build

clean:
	rm build

run: 
	./build
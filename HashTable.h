#include <iostream> 
using namespace std;

#ifndef SECONDFILE_H
#define SECONDFILE_H

// add a struct for the nodes in the linked list (for collisions and inserting elements)

struct Node{
    int value; 
    Node* next;

};


class HashTable{

    private:
        Node* arr[10];
        int size; 
        int hashFunction(int key);

    public: 
        HashTable();
        void insert(int value);
        void printTable();
        bool deleteVal(int value);

};

#endif
#include <iostream> 
#include "HashTable.h"

using namespace std;


HashTable::HashTable(){

    this->size = 10; 

    for(int i = 0; i < this->size; i++){
        this->arr[i] = nullptr;
    }

}

void HashTable::printTable(){

    for(int i = 0; i < this->size; i++){

        Node* currNode = this->arr[i];

        if(currNode == nullptr){
            cout << "NULL" << endl;
        }
        else{

            while(currNode != nullptr){
                cout << currNode->value << endl;
                currNode = currNode->next;
            }

        }

    }

}

/*
    HashFunction: 
    Given a key, returns its hash value. 
*/
int HashTable::hashFunction(int key){

    return key % this->size;

}

void HashTable::insert(int value){

    int hashKey = this->hashFunction(value);

    Node* newNode = new Node;
    newNode->next = nullptr;
    newNode->value = value;

    if(this->arr[hashKey] != nullptr){

        // collision
        cout << "collision" << endl;

    }
    else{

        this->arr[hashKey] = newNode;

    }


}
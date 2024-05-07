#include <iostream> 
#include "HashTable.h"

using namespace std;


HashTable::HashTable(){

    this->size = 10; 

    for(int i = 0; i < this->size; i++){
        this->arr[i] = nullptr;
    }

}

/*
    Returns true if delete was successful or false if not
*/
bool HashTable::deleteVal(int value){

    // Find hash value corresponding to the given value
    int hashKey = hashFunction(value);

    if(this->arr[hashKey] == nullptr){
        return false;
    }
    else{

        Node* currHead = this->arr[hashKey];

        if(currHead->value == value){
            // value to remove is the head of the linked list 
            
        }

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
                cout << currNode->value << "->";
                currNode = currNode->next;
            }

            cout << "NULL" << endl;

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
        Node* currHead = this->arr[hashKey];

        while(currHead->next != nullptr){
            currHead = currHead->next;
        }

        currHead->next = newNode;

    }
    else{

        this->arr[hashKey] = newNode;

    }


}
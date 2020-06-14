#include "HashMap.hpp"

HashMap::HashMap(int input_capacity)
{
    capacity = input_capacity;

    //  Buckets is a pointer to DLL array
    buckets = new DoublyLinkedList [capacity];

    // Add empty bukets to the buckets array
    for(int i=0; i<capacity; i++)
    {
        buckets[i] = DoublyLinkedList();
    }
}

void HashMap::resize_buckets(int input_new_capacity)
{
    // Double the size of the buckets array
    DoublyLinkedList * new_buckets;
    new_buckets = new DoublyLinkedList [2*this->capacity];

    // TODO add rehashing
    for (int i=0; i<this->capacity; i++)
    {
        new_buckets[i] = this->buckets[i];
    }

    // reassign to new buckets 
    delete this->buckets;
    this->buckets = new_buckets;

    // increase capacity
    this->capacity *= 2;
}

int HashMap::generate_hash(string &input_key)
{
    int index = this->generate_hash(input_key);
    return index;
}

int HashMap::generate_hash(string &input_key)
{
    int hash = 0;
    for (int i = 0; i < input_key.size(); i++)
    {
        hash += static_cast<int> (input_key[i]);
    }
    return hash;
}
int HashMap::generate_hash
HashMap::~HashMap()
{
    delete [] buckets;
}
#include "HashMap.hpp"

HashMap::HashMap(int input_capacity)
{
    capacity = input_capacity;
    buckets = new DoublyLinkedList [capacity];
}

void HashMap::resize_buckets(int input_new_capacity)
{
    cout<<"In the resizing function";
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
HashMap::~HashMap()
{
    delete [] buckets;
}
#ifndef HASHMAP_HPP
#define HASHMAP_HPP

#include "DoublyLinkedList.hpp"
#include <string>
#include <iostream>

using std::string;
using std::cout;

class HashMap
{
    public:

        HashMap(int capacity=100);
        ~HashMap();

        int generate_hash_index(string &input_key);
        int generate_hash(string &input_key);
        
    private:

        void resize_buckets(int input_new_capacity);
        DoublyLinkedList * buckets;
        int capacity;
};

#endif
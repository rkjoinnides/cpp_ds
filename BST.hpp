#ifndef BST_HPP
#define BST_HPP

#include "BSTNode.hpp"

class BST
{
    private:
        BSTNode * findLast(int inputValue);
        BSTNode * root;

    public:
        BST();
        void add(int inputValue);
};

#endif
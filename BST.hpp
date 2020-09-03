#ifndef BST_HPP
#define BST_HPP

#include "BSTNode.hpp"

class BST
{
    private:
        shared_ptr<BSTNode> findLast(int inputValue);
        shared_ptr<BSTNode> root;

    public:
        BST();
        void add(int inputValue);
};

#endif
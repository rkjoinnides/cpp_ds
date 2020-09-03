#ifndef BST_HPP
#define BST_HPP

#include "BSTNode.hpp"

class BST
{
    private:
        vector<shared_ptr<BSTNode>> inOrderTraversal(shared_ptr<BSTNode> current_node, vector<shared_ptr<BSTNode>>);
        void addChild(shared_ptr<BSTNode> parent, shared_ptr<BSTNode> child);
        shared_ptr<BSTNode> findLast(int inputValue);
        shared_ptr<BSTNode> root;

    public:
        BST();
        void add(int inputValue);
};

#endif
#include "BST.hpp"

void BST::add(int inputValue)
{

    shared_ptr<BSTNode>newNode;
    newNode = shared_ptr<BSTNode>(new BSTNode(inputValue));
    // empty tree case
    if(this->root == nullptr)
    {
        this->root = newNode;
    }

    else
    {
        this->addChild(findLast(inputValue), newNode);
    }
}

void BST::addChild(shared_ptr<BSTNode> parent, shared_ptr<BSTNode> child)
{
    if(parent->getVal() > child->getVal())
    {
        parent->setLeft(child);
    }
    else if (parent->getVal() < child->getVal())
    {
        parent->setRight(child);
    }
    else
    {
        parent->setRight(child);
    }
} 

shared_ptr<BSTNode> BST::findLast(int inputValue)
{
    shared_ptr<BSTNode> tmp = this->root;
    shared_ptr<BSTNode> prev = nullptr;

    while (tmp != nullptr)
    {
        prev = tmp;
        if (tmp->getVal() > inputValue)
        {
            tmp = tmp->getLeft();
        }
        else if (tmp->getVal() < inputValue)
        {
            tmp = tmp->getRight();
        }
        else if ((tmp->getVal() == inputValue) && (tmp->getRight() == nullptr))
        {
            return tmp;
        }
        else
        {
            tmp = tmp->getRight();
        }
    }
    return prev;

}


vector<shared_ptr<BSTNode>> BST::inOrderTraversal(shared_ptr<BSTNode> current_node, vector<shared_ptr<BSTNode>>)
{

}


BST::BST()
{
    this->root = nullptr;
}
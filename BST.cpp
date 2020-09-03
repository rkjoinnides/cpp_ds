#include "BST.hpp"

void BST::add(int inputValue)
{
    // empty tree case
    if(this->root == nullptr)
    {
        this->root = std::shared_ptr<BSTNode>(new BSTNode(inputValue));
    }
    
    else
    {
        BSTNode * parent = findLast(inputValue);
        parent->addChild(inputValue);
    }
}
 

BSTNode * BST::findLast(int inputValue)
{
    BSTNode * tmp = this->root;
    BSTNode * prev = nullptr;

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

BST::BST()
{
    this->root = nullptr;
}
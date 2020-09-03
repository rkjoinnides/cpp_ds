#include "BSTNode.hpp"

BSTNode::BSTNode(int inputValue, shared_ptr<BSTNode> inputLeft, shared_ptr<BSTNode> inputRight, shared_ptr<BSTNode> inputParent)
{
    this->left = inputLeft;
    this->right = inputRight;
    this->parent = inputParent;
    this->value = inputValue;
}

BSTNode::BSTNode(int inputValue)
{
    this->left = nullptr;
    this->right = nullptr;
    this->parent = nullptr;
    this->value = inputValue;
}

BSTNode::BSTNode(int inputValue, shared_ptr<BSTNode> inputParent)
{
    this->left = nullptr;
    this->right = nullptr;
    this->parent = inputParent;
    this->value = inputValue;
}

BSTNode::BSTNode(int inputValue, shared_ptr<BSTNode> inputParent, shared_ptr<BSTNode> inputChild, bool isLeft)
{
    if(isLeft)
    {
        this->left = inputChild;
        this->right = nullptr;
    }
    else
    {
        this->left = nullptr;
        this->right = inputChild;
    }

    this->parent = inputParent;
    this->value = inputValue;
}

void BSTNode::addChild(int inputValue)
{
    
}

shared_ptr<BSTNode> BSTNode::getLeft()
{
    return this->left;
}

shared_ptr<BSTNode> BSTNode::getRight()
{
    return this->right;
}

shared_ptr<BSTNode> BSTNode::getParent()
{
    return this->parent;
}

int BSTNode::getVal()
{
    return this->value;
}

void BSTNode::setLeft(shared_ptr<BSTNode> inputLeft)
{
    this->left = inputLeft;
}

void BSTNode::setRight(shared_ptr<BSTNode> inputRight)
{
    this->right = inputRight;
}

void BSTNode::setParent(shared_ptr<BSTNode> inputParent)
{
    this->parent = inputParent;
}

void BSTNode::setValue(int inputValue)
{
    this->value = inputValue;
}
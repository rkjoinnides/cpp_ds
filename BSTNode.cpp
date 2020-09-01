#include "BSTNode.hpp"

BSTNode::BSTNode(int inputValue, BSTNode * inputLeft, BSTNode * inputRight, BSTNode * inputParent)
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

BSTNode::BSTNode(int inputValue, BSTNode * inputParent)
{
    this->left = nullptr;
    this->right = nullptr;
    this->parent = inputParent;
    this->value = inputValue;
}

BSTNode::BSTNode(int inputValue, BSTNode * inputParent, BSTNode * inputChild, bool isLeft)
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

BSTNode * BSTNode::getLeft()
{
    return this->left;
}

BSTNode * BSTNode::getRight()
{
    return this->right;
}

BSTNode * BSTNode::getParent()
{
    return this->parent;
}

int BSTNode::getVal()
{
    return this->value;
}

void BSTNode::setLeft(BSTNode * inputLeft)
{
    this->left = inputLeft;
}

void BSTNode::setRight(BSTNode * inputRight)
{
    this->right = inputRight;
}

void BSTNode::setParent(BSTNode * inputParent)
{
    this->parent = inputParent;
}

void BSTNode::setValue(int inputValue)
{
    this->value = inputValue;
}
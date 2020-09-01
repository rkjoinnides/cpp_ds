#ifndef BSTNODE_HPP
#define BSTNODE_HPP

class BSTNode
{

    private:

        BSTNode * left = nullptr;
        BSTNode * right = nullptr;
        BSTNode * parent = nullptr;
        int value;
    

    public:

        BSTNode(int inputValue, BSTNode * left, BSTNode * right, BSTNode * parent);
        BSTNode(int inputValue);
        BSTNode(int inputValue, BSTNode * inputParent);
        BSTNode(int inputValue, BSTNode * inputParent, BSTNode * inputChild, bool isLeft);

        BSTNode * getLeft();
        BSTNode * getRight();
        BSTNode * getParent();
        int getVal();

        void setLeft(BSTNode * inputLeft);
        void setRight(BSTNode * inputRight);
        void setParent(BSTNode * inputParent);
        void setValue(int inputValue);

        void addChild(int inputValue);

};

#endif
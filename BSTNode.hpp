#ifndef BSTNODE_HPP
#define BSTNODE_HPP

#include <memory>
#include <vector>

using std::shared_ptr;
using std::vector;

class BSTNode
{

    private:

        shared_ptr<BSTNode> left = nullptr;
        shared_ptr<BSTNode> right = nullptr;
        shared_ptr<BSTNode> parent = nullptr;

        // shared_ptr<BSTNode> left = nullptr;
        // shared_ptr<BSTNode> right = nullptr;
        // shared_ptr<BSTNode> parent = nullptr;
        
        int value;
    

    public:

        BSTNode(int inputValue, shared_ptr<BSTNode> left, shared_ptr<BSTNode> right, shared_ptr<BSTNode> parent);
        BSTNode(int inputValue);
        BSTNode(int inputValue, shared_ptr<BSTNode> inputParent);
        BSTNode(int inputValue, shared_ptr<BSTNode> inputParent, shared_ptr<BSTNode> inputChild, bool isLeft);
        
        shared_ptr<BSTNode> getLeft();
        shared_ptr<BSTNode> getRight();
        shared_ptr<BSTNode> getParent();

        // shared_ptr<BSTNode> getLeft();
        // shared_ptr<BSTNode> getRight();
        // shared_ptr<BSTNode> getParent();
        
        int getVal();

        void setLeft(shared_ptr<BSTNode> inputLeft);
        void setRight(shared_ptr<BSTNode> inputRight);
        void setParent(shared_ptr<BSTNode> inputParent);
        void setValue(int inputValue);

        void addChild(int inputValue);

};

#endif
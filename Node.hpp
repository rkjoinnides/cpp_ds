class Node
{
    public:
        Node * next;
        Node * prev;
        int val = 0;
        Node(int inputValue, Node * nextPtr = nullptr , Node * prevPtr = nullptr);
};
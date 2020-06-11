#include "Node.hpp"

class DoublyLinkedList
{
    public:
        DoublyLinkedList();
        ~DoublyLinkedList();

        Node * head = nullptr;
        Node * tail = nullptr;

        void addToHead(int inputVlaue);
        void addToTail(int inputValue);

        void deleteFirstNode();
        void deleteLastNode();

        void treverseHeadToTail();
        void traverseTailTohead();

        void printHead();
        void printTail();
};
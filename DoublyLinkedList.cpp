/********************************************************************* 
** Author: Riley Joinindes
** Date: 11/10/2019
** Class: OSU 162, Lab 6
** Description: Implementation file for the doubly linked list
*********************************************************************/
#include "DoublyLinkedList.hpp"

/********************************************************************* 
**Description: Constructor sets the head and tail to nullPtr
*********************************************************************/
DoublyLinkedList::DoublyLinkedList()
{
    head = nullptr;
    tail = nullptr;
}

/********************************************************************* 
**Description: method to read numbers from a file using addToHead
*********************************************************************/
void DoublyLinkedList::readFromFile()
{
    int number = 0;
    string num = to_string(number);
    ifstream numberFile("numbers.txt");

    if (!numberFile)
    {
        cout<<"could not open the file";
    }

    else
    {
        while(numberFile>>number)
        {
            addToHead(num, number);
        }

        this->traverseTailTohead();
    }
}

/********************************************************************* 
**Description: Method to add number to head of list and set pointers
correctly
*********************************************************************/
void DoublyLinkedList::addToHead(string inputKey, int inputValue)
{
    //consider the case of an empty list
    if((head == nullptr) && (tail == nullptr))
    {
        head = new Node(inputKey, inputValue);
        tail = head;
    }

    //consider case of a list with one entry
    else if(head == tail)
    {
        head = new Node(inputKey, inputValue, head);
        tail->prev = head; 
    }

    else
    {
        head->prev = new Node(inputKey, inputValue, head);
        head = head->prev;
    }
}

/********************************************************************* 
**Description: Method for adding a number to the tail of list and set 
pointers correctly
*********************************************************************/
void DoublyLinkedList::addToTail(string inputKey, int inputValue)
{
    //consider the empty case
    if ((head == nullptr) && (tail == nullptr))
    {
        tail = new Node(inputKey, inputValue);
        head = tail;
    }

    //consider the case of list with one entry
    else if(head == tail)
    {
        tail = new Node(inputKey, inputValue, nullptr, head);
        head->next = tail;
    }

    else
    {
        tail->next = new Node(inputKey, inputValue, nullptr, tail);
        tail = tail->next;
    }
} 

/********************************************************************* 
**Description: Method for walking down the list from head to tail and
print values along the way.
*********************************************************************/
void DoublyLinkedList::treverseHeadToTail()
{
    if (head == nullptr && tail == nullptr)
    {
        cout<<"The List Is Empty \n";
    }

    else
    {
        cout<<"The list from head to tail: ";
        Node * tempPtr = head;
        while (tempPtr != nullptr)
        {
            cout<<tempPtr->val<<" ";
            tempPtr = tempPtr->next;
        }
        cout<<endl;
    }
}

/********************************************************************* 
**Description: Method for walking up the list from tail to head and
print values along the way.
*********************************************************************/
void DoublyLinkedList::traverseTailTohead()
{
    if (head == nullptr && tail == nullptr)
    {
        cout<<"The List Is Empty \n";
    }

    else
    {
        cout<<"The list from the tail to head: ";
        Node * tempPtr = tail;
        while(tempPtr != nullptr)
        {
            cout<<tempPtr->val<<" ";
            tempPtr = tempPtr->prev;
        }
        cout<<endl;
    }

}

/********************************************************************* 
**Description: Method for deleting the head of the list.
*********************************************************************/
void DoublyLinkedList::deleteFirstNode()
{
    //only proceede if the list filled
    if (head != nullptr)
    {
        //put the member to be deleted in a temp pointer
        Node * tempPtr = head;

        //if the list is one member
        if (head->next == nullptr)
        {
            head = nullptr;
            tail = nullptr;
        }
        
        else
        {
            head = head->next;
            head->prev = nullptr;
        }

        delete tempPtr;
    }
}

/********************************************************************* 
**Description: Method for deleting the tail of the list.
*********************************************************************/
void DoublyLinkedList::deleteLastNode()
{
    if (tail != nullptr)
    {
        Node * tempPtr = tail;

        if (tail->prev == nullptr)
        {
            tail = nullptr;
            head = nullptr;
        }

        else
        {
            tail = tail->prev;
            tail->next = nullptr;
        }
        
        delete tempPtr;
    }
}

/********************************************************************* 
**Description: Prints the head of the lsit
*********************************************************************/
void DoublyLinkedList::printHead()
{
    cout<<endl;
    //check if list is empty
    if (head != nullptr)
    {
        cout<<"The value at the head is : "<<head->val<<endl;
    }

    else
    {
        cout<<"The list is empty \n";
    }
    
}

/********************************************************************* 
**Description: Method for printing the tail of the list
*********************************************************************/
void DoublyLinkedList::printTail()
{
    cout<<endl;

    if(tail != nullptr)
    {
        cout<<"The value at the tail is : "<<tail->val<<endl;
    }

    else
    {
        cout<<"The list is empty \n";
    }
}

/********************************************************************* 
**Description: Destructor
*********************************************************************/
DoublyLinkedList::~DoublyLinkedList()
{
    Node * tempPtr = head;
    //walk down the list and delete the trailing ptr
    while(tempPtr != nullptr)
    {
        //make a trailing pointer
        Node * trailingPtr = tempPtr;
        tempPtr = tempPtr->next;
        delete trailingPtr;
    }
}
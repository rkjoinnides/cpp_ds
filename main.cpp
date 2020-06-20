#include "DoublyLinkedList.hpp"
#include "menu.hpp"
#include "validateInt.hpp"
#include "HashMap.hpp"

int main()
{
    DoublyLinkedList dll;
    // for(int i=0; i<14; i++)
    // {
    //     dll.addToHead(to_string(i), i);
    // }
    dll.addToHead("12", 12);
    dll.traverseHeadToTail();
    cout<<dll.contains("12")<<endl;
    dll.remove("12");
    dll.traverseHeadToTail();
}
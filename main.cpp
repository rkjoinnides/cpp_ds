#include "DoublyLinkedList.hpp"
#include "menu.hpp"
#include "validateInt.hpp"
#include "HashMap.hpp"

int main()
{
    HashMap hm(100);
    string r = "riley";
    int result = hm.generate_hash(r);
    cout<<result<<endl;
    return 0;
}
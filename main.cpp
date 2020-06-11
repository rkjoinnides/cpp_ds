#include "DoublyLinkedList.hpp"
#include "menu.hpp"

int main()
{
    DoublyLinkedList dll;
    string mainMenuOptions [] = {"Add A New Node To The Head", "Add A New Node To The Tail", "Delete From The Head",
                                "Delete From The Tail", "Traverse The List Reversely", "Quit"};
    Menu mainMenu(mainMenuOptions, 6);
    int userChoice = 0;

    do
    {
        mainMenu.displayOptions();
        cin>>userChoice;

        switch (userChoice)
        {
            case 1:
                //dll.addToHead();
                break;
            
            case 2:
                

            default:
                break;
        }

        if (userChoice != 6)
        {
            dll.treverseHeadToTail();
        }

    }while(userChoice != 6);

    return 0;
}
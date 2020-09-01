/********************************************************************* 
** Author: Riley Joinindes
** Date: 11/10/2019
** Class: OSU 162, Lab 6
** Description: Driver function for the lab
*********************************************************************/
#include "DoublyLinkedList.hpp"
#include "menu.hpp"
#include "validateInt.hpp"
#include "BST.hpp"

int main()
{
    BST b;
    b.add(10);
}


/********************************************************************* 
**Description: Driver code for lab 6
*********************************************************************/
// int main()
// {
//     cout<<"********************************************\nI will be attempting both extra credit tasks\n********************************************\n";

//     int userChoice = 0;
//     DoublyLinkedList dll;

//     //ask the user if they want to read numbers from a file to initally fill the list
//     string fileMenuOptions [] = {"Use numbers.txt To Generate List", "Do Not Use numbers.txt to generate list"};
//     Menu fileMenu(fileMenuOptions, 2);
//     fileMenu.displayOptions();
//     userChoice = validateInt(1,2);

//     switch (userChoice)
//     {
//         case 1:
//             dll.readFromFile();
//             break;

//         case 2:

//             break;

//         default:
//             break;
//     }

//     //ask the user to do operations on the list

//     string mainMenuOptions [] = {"Add A New Node To The Head", "Add A New Node To The Tail", "Delete From The Head",
//                                 "Delete From The Tail", "Traverse The List Reversely", "Print the value at the head",
//                                 "Print the value at the tail", "Quit"};
//     Menu mainMenu(mainMenuOptions, 8);
    

//     do
//     {
//         cout<<"\n";
//         mainMenu.displayOptions();
//         userChoice = validateInt(1,8);

//         switch (userChoice)
//         {
//             case 1:
//                 cout<<"Enter an integer to add to the head of the list \n";
//                 dll.addToHead(validateInt());
//                 break;
            
//             case 2:
//                 cout<<"Enter an integer to add to the tail of the list \n";
//                 dll.addToTail(validateInt());
//                 break;

//             case 3:
//                 dll.deleteFirstNode();
//                 break;

//             case 4:
//                 dll.deleteLastNode();
//                 break;
            
//             case 5:
//                 dll.traverseTailTohead();
//                 break;

//             case 6:
//                 dll.printHead();
//                 break;
            
//             case 7:
//                 dll.printTail();
//                 break;

//             default:
//                 break;
//         }

//         //do not print out the list for user choices that would not make sense
//         if (userChoice != 8 && userChoice != 5 && userChoice != 6 && userChoice != 7)
//         {
//             cout<<endl;
//             dll.treverseHeadToTail();
//         }

//     }while(userChoice != 8);

//     return 0;
// }
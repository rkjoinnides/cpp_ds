/********************************************************************* 
** Author: Riley Joinindes
** Date: 10/27/2019
** Class: OSU 162, Project 2
** Description: Header file for the menu class
*********************************************************************/
#ifndef MENU_HPP
#define MENU_HPP
#include "inputValidator.hpp"

#include <string>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::cin;
using std::endl;

class Menu
{
    private:
        int numberOptions;
        string * options;
        string option;
        InputValidator validator;

    public:
        Menu();
        Menu(string * inputOptions, int numberOptions);

        void updateOptions(string * inputOptions, int numberOptions);
        void updateOption(string inputOption);

        int getUserInput();
        int getUserInput(int min);
        int getUserInput(int min, int max);

        void displayOptions();
        void displayOption();

        ~Menu();
        
};
#endif
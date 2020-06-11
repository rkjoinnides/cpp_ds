/********************************************************************* 
** Author: Riley Joinindes
** Date: 11/10/2019
** Class: OSU 162, Project 3
** Description: Implementation file for the menu class
*********************************************************************/
#include "menu.hpp"
#include "inputValidator.hpp"


using std::string;

/********************************************************************* 
**Description: Default constructor of the menu class
*********************************************************************/
Menu::Menu()
{
    options = new string[1];
    option = "";
}
/********************************************************************* 
**Description: The constructor allocates memory for an array of 
strings of variablke size. It also sets the option variable to an 
empty string.
*********************************************************************/
Menu::Menu(string * inputOptions, int inputNumberOptions)
{
    numberOptions = inputNumberOptions;
    options = new string[numberOptions];
    option = "";

    for (int i = 0;i<numberOptions;i++)
    {
        options[i] = inputOptions[i];
    }
}

/********************************************************************* 
** Description: This function displays the current options in the
options array, it takes no arguments and returns nothing.
*********************************************************************/
void Menu::displayOptions()
{
    cout<<"Enter The Number That Corresponds To Your Desired Option:"<<endl;
    for(int i = 0;i < numberOptions; i++)
    {
        cout<<i+1<<") "<<options[i]<<endl;
    }
}

/********************************************************************* 
** Description: This function displays the current option
*********************************************************************/
void Menu::displayOption()
{
    cout<<option<<endl;
}

/********************************************************************* 
** Description: This function allows the options array to be updated
*********************************************************************/
void Menu::updateOptions(string * inputOptions, int inputNumberOptions)
{
    delete [] options;

    numberOptions = inputNumberOptions;
    options = new string[numberOptions];
    
    for (int i = 0;i<numberOptions;i++)
    {
        options[i] = inputOptions[i];
    }
}

/********************************************************************* 
** Description: This function allows the option to be updated
*********************************************************************/
void Menu::updateOption(string inputOption)
{
    option = inputOption;
}

// int Menu::getUserInput()
// {
//     return validator.validateInt();
// }

// int Menu::getUserInput(int min)
// {
//     return validator.validateInt(min);
// }

// int Menu::getUserInput(int min, int max)
// {
//     return validator.validateInt(min,max);
// }


Menu::~Menu()
{
    delete [] options;
}
/********************************************************************* 
** Author: Riley Joinindes
** Date: 11/10/2019
** Class: OSU 162, Project 2
** Description: Header file for the InputValidator class
*********************************************************************/
#ifndef INPUTVALIDATOR_HPP
#define INPUTVALIDATOR_HPP

#include <string>
using std::string;


class InputValidator
{
    public:
        int validateInt();
        int validateInt(int min);
        int validateInt(int max, int min);
};

#endif
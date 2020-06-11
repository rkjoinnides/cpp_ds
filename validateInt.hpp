/********************************************************************* 
** Author: Riley Joinindes
** Date: 10/27/2019
** Class: OSU 162, Lab 6
** Description: Header file for the validation functions
*********************************************************************/
#ifndef INTVALIDATOR_HPP
#define INTVALIDATOR_HPP

#include <iostream>
#include <string>
#include <stdexcept>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::getline;

int validateInt();
int validateInt(int min);
int validateInt(int min, int max);

#endif
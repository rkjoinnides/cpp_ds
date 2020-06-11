/********************************************************************* 
** Author: Riley Joinindes
** Date: 11/10/2019
** Class: OSU 162, Project 3
** Description: Implementation file of the InputValidator class
*********************************************************************/
#include "inputValidator.hpp"
#include <iostream>
#include <ios>
#include <limits>
#include <string>   
#include <cctype>
#include <limits>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::stoi;

/********************************************************************* 
** Description: This function is will validate that a users input is 
an int. If the input extraction fails, it will continue to ask the
user for input until extraction is sucessful.
*********************************************************************/
int InputValidator::validateInt()
{

    int intTester = 0;
    bool isInt = false;

    do
    {
        cin>>intTester;

        if (cin.fail())
        {
            //reset the bad bits and remove the buffer (32767) up until the newline char
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Please enter an integer:"<<endl;
        }

        //Clear the input buffer and check if more than just the newline character was ignored. 
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        if (cin.gcount() > 1)
        {
            cout<<"Weirdness detected, enter an integer"<<endl;
        }

        else
        {
            isInt = true;
        }

    }while(!isInt);

    return intTester;
}

/********************************************************************* 
** Description: This function is will validate that a users input is 
an int above a min number. If the input extraction fails, or the number
is below the minimum, it will continue to ask the user for input 
until an int above min is entered.
*********************************************************************/
int InputValidator::validateInt(int min)
{

    int intTester = 0;
    bool isInt = false;

    do
    {
        cin>>intTester;

        if (cin.fail())
        {
            //reset the bad bits and remove the buffer up until the newline char
            cin.clear();
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            cout<<"Please enter an integer:"<<endl;
        }

        else
        {
            //Clear the input buffer and check if more than just the newline character was ignored. 
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            if (cin.gcount() > 1)

            {
                cout<<"Please Enter Only An Integer:"<<endl;
            }

            else if (intTester <= min)
            {
                cout<<"Please enter a number greater than "<<min<<endl;
            }

            else
            {
                isInt = true;
            }

        }
    
    }while(!isInt);

    return intTester;
}

/********************************************************************* 
** Description: This function is will validate that a users input is 
an int between two numbers. If the input extraction fails, or the number
is below not between the two numbers, it will continue to ask the user 
for input until an int between the two numbers is entered.
*********************************************************************/
int InputValidator::validateInt(int min, int max)
{

    string testString = "";
    int intTester = 0;
    bool isInt = true;

    do
    {
        isInt = true; 
        cin>>testString;
        
        //test to see if all the characters are ints
        for(string::size_type i = 0; i<testString.size();i++)
        {
            if(!(isdigit(testString[i])))
            {
                isInt = false;
            }
        }
        
        if (isInt)
        {
            try
            {
                intTester = stoi(testString);
            }

            catch(std::out_of_range& e)
            {
                //cout<<"Please enter an integer\n";
                isInt = false;
            }
        }        

        if (isInt)
        {   
            if ((intTester > max) || (intTester < min))
            {
                cout<<"Please enter a number between: "<<min<<" and "<<max<<endl;
            }

            else
            {
                isInt = true;
            }
        }

        else
        {
            cout<<"Please enter an integer \n";
        }

        // if (!(cin>>intTester))
        // {
        //     //reset the bad bits and remove the buffer up until the newline char
        //     cin.clear();
        //     cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        //     if(cin.gcount() > 1)
        //     {
        //         cout<<"Please Enter Only An Integer:"<<endl;
        //     }
        //     else
        //     {
        //         cout<<"Please enter an integer:"<<endl;
        //     }
          
        // }


    }while(!isInt);

    return intTester;
}
/********************************************************************* 
** Author: Riley Joinindes
** Date: 10/27/2019
** Class: OSU 162, Lab 6
** Description: Implementation of input validation functions
*********************************************************************/
#include "validateInt.hpp"

/********************************************************************* 
** Description: This function is will validate that a users input is 
an int. If the input extraction fails, it will continue to ask the
user for input until extraction is sucessful.
*********************************************************************/
int validateInt()
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
            if(!(isdigit(testString[i])) && testString[i] != '-')
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

        else
        {
            cout<<"Please enter an integer \n";
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
int validateInt(int min)
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
            if ((intTester < min))
            {
                cout<<"Please enter a number grater than "<<min<<endl;
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
        
    }while(!isInt);

    return intTester;
}

/********************************************************************* 
** Description: This function is will validate that a users input is 
an int between two numbers. If the input extraction fails, or the number
is below not between the two numbers, it will continue to ask the user 
for input until an int between the two numbers is entered.
*********************************************************************/
int validateInt(int min, int max)
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
        
    }while(!isInt);

    return intTester;
}
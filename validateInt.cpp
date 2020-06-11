#include "validateInt.hpp"

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

#include <iostream>
using namespace std;

int main()
{
    bool goAgain = false;
    int lineNum;
    string choice;
    string stars;

    while (!goAgain)
    {
        stars = "*  ";
        cout << "Enter a line number between 1 and 10" << endl;
        cin >> lineNum;
        for (int i = 0; i < lineNum; i++)
            {
                stars = "*  " + stars;
                cout << stars << endl;
            }
        cout << "Would you like to go again? Y/N" << endl;
        cin; choice;
        if (choice == "n" || choice == "N")
        {
            goAgain = true;
        }
        else
        {
            goAgain = false;
        }
        

      
    }
}


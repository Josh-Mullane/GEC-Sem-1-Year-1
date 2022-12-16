#include <iostream>
#include <Windows.h>
using namespace std;

int main()
{
    bool goAgain = false;
    int lineNum;
    char choice;
    string stars = "   ";

    while (!goAgain)
    {
        cout << "Enter a line number between 1 and 10" << endl;
        cin >> lineNum;
        for (int i = 0; i < lineNum; i++)
            {
                stars = "*  " + stars;
                cout << stars << endl;
            }
        cout << "Would you like to go again? Y/N" << endl;
        cin >> choice;

        if (choice == 'n' || choice == 'N')
        {
            goAgain = true;
        }
        else
        {
            stars = "   ";
            goAgain = false;
        }
    }
    cout << "Goodbye." << endl;
    cin.get();
    exit(0);

}


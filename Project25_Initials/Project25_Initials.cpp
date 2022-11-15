#include <iostream>
#include <string>
using namespace std;

char initialsString[50];
char initial1;
char initial2;

int main()
{
    cout << "Enter your initials and Surname (<initial> <middle initial> <surname>)" << endl;
    cin.getline(initialsString, 50);

    initial1 = initialsString[0];
    initial2 = initialsString[2];

    cout << initial1 << endl << initial2 << endl;

    for (int i = 4; i < sizeof(initialsString); ++i)
    {
        cout << initialsString[i];
    }
}


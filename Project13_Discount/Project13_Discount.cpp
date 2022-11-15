#include <iostream>
using namespace std;

int main()
{
    char status;
    char game;

    cout << "What is your status? (s - student, t - teacher, o - other)" << endl;
    cin >> status;
    
    cout << "Which game would you like? 1 or 2" << endl;
    cin >> game;

    if ((status == 's' || status == 't') && game == '1')
        cout << "20% discount" << endl;
    else if ((status == 's' || status == 't') && game == '2')
        cout << "10% discount" << endl;
    else
        cout << "no discount" << endl;
}

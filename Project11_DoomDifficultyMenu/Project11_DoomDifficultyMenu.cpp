#include <iostream>
using namespace std;

int main()
{

    int diffInput;

    cout << "Please choose your difficulty:" << endl;
    cout << "1. I'm too young to die!" << endl;
    cout << "2. Hey, not too rough!" << endl;
    cout << "3. Hurt me plenty" << endl;
    cout << "4. Ultra-Violence" << endl;
    cout << "5. Nightmare" << endl;

    cin >> diffInput;

    switch (diffInput)
    {
    case 1:
        cout << "Coward.";
    break;

    case 2:
        cout << "ur bad";
    break;

    case 3:
        cout << "boring";
    break;

    case 4:
        cout << "respectable";
    break;

    case 5:
        cout << "prepare your butthole";
    break;

    default:
        cout << "you're dumb";
    break;

    }
}

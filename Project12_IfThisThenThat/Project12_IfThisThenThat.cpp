#include <iostream>
using namespace std;

int main()
{
    int rain = 1;
    int snow = 2;
    int temperature;
    string weather;

    cout << "Is it raining or snowing? (1 for rain, 2 for snow)" << endl;
    cin >> weather;
    cout << "What temperature is it? (celcius)" << endl;
    cin >> temperature;

    if (weather == "1")
    {
        if (temperature > 15)
            cout << "Wear a light raincoat" << endl;
        else
            cout << "Wear a thick coat" << endl;
    }
    else if (weather == "2")
    {
        if (temperature > 5)
            cout << "Wear something warm" << endl;
        else if (temperature > 0)
            cout << "Wrap up well" << endl;
        else
            cout << "Stay home" << endl;
    }
    else
        cout << "Have a nice day" << endl;
}

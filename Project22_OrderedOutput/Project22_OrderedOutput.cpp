#include <iostream>
#include <algorithm>
using namespace std;

int orderArray[5];
int bigLocation;
int bigNum;

int main()
{
    for (int i = 0; i < 5; ++i)
    {
        cout << "Input number " << i + 1 << endl;
        cin >> orderArray[i];

        //This for some reason does not need a starting value to compare to and still works
        if (orderArray[i] > bigLocation)
        {
            bigLocation = i + 1;
            bigNum = orderArray[i];
        }
    }
    sort(orderArray, orderArray + 5);

    cout << "In order:" << endl;
    for (int i = 0; i < 5; ++i)
        cout << orderArray[i] << endl;

    sort(orderArray, orderArray + 5, greater<int>());

    cout << "Backwards:" << endl;
    for (int i = 0; i < 5; ++i)
        cout << orderArray[i] << endl;

    cout << "The biggest number was: " << bigNum << " and the location was: " << bigLocation << endl;       
}
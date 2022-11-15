#include <iostream>
using namespace std;

int main()
{
    int num1;
    int num2;
    int sum;
    int loopCount;
    float mean;
    bool zInput = false;
    loopCount = 2;

    cout << "Enter a number" << endl;
    cin >> num1;
    cout << "Enter another" << endl;
    cin >> num2;
    mean = (num1 + num2) / 2;
    sum = num1 + num2;

    while (!zInput)
    {
        cout << "Mean: " << mean << " Sum: " << sum << endl;
        cout << "Enter another number" << endl;
        cin >> num1;
        loopCount++;
        if (num1 != 0)
        {
            sum = sum + num1;

            mean = (mean + num1) / loopCount;
        }
        else    
            zInput = true;
 



    }
    

}


#include <iostream>
using namespace std;

int num[10];
bool evenOrOdd;
int numMod;
int numOfEven = 0;
int numOfOdd = 0;
int evenTotal = 0;
int oddTotal = 0;

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
    cout << "The amount of odd numbers is " << numOfOdd << " and the total is " << oddTotal << endl;
    cout << "The amount of even numbers is " << numOfEven << " and the total is " << evenTotal << endl;
}

bool numCheck(int i, bool evenOrOdd, int numMod)
{
    numMod = i % 2;
    if (numMod == 1)
        evenOrOdd = true;
    else
        evenOrOdd = false;

    return evenOrOdd;
}

int main()
{
    for (int i = 0; i < 10; ++i)
    {
        cout << "Enter number: " << i+1 << endl;
        cin >> num[i];

        evenOrOdd = numCheck(num[i], evenOrOdd, numMod);
        //numCheck(num[i], evenOrOdd, numMod);

        if (evenOrOdd)
        {
            ++numOfEven;
            evenTotal = evenTotal + num[i];
        }
        else
        {
            ++numOfOdd;
            oddTotal = oddTotal + num[i];
        }
        
    }      
    outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
}


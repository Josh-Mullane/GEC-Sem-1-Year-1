#include <iostream>
#include <algorithm>
using namespace std;

int numArray[10];

int main()
{
	for (int i = 0; i < 10; ++i)
	{
		cout << "Please input number " << i + 1 << endl;
		cin >> numArray[i];
	}
	sort(numArray, numArray + 10);
	cout << "The smallest number is: " << numArray[0] << endl;
}


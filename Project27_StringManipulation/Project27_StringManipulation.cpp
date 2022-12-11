#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string name1;
	string name2;
	string testString = "Do you know who loves C++ XX does!";

	cout << "Enter your name" << endl;
	getline(cin, name1);

	testString = "Do you know who loves C++ X" + name1 + "X does!";
	cout << testString << endl;

	int stringLength = sizeof(testString);

	for (int i = 0; i < stringLength; ++i)
	{
		if (testString[i] == 'X')
			testString[i] = ' ';
		else
		{

		}
	}
	cout << testString << endl;
}

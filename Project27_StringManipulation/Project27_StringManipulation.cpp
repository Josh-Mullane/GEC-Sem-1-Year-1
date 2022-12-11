#include <iostream>
#include <string>
#include <algorithm>
#include <regex>

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

	for (size_t i = 0; i < testString.size(); ++i)
		if (testString[i] == 'X')
			testString[i] = NULL;

	lengthLabel:
	cout << "Enter a longer name" << endl;
	getline(cin, name2);

	if (name2.size() <= name1.size())
		goto lengthLabel;

	int name1StartPos = testString.find(name1);
	int name1EndPos = testString.size();

	
	testString.replace(name1StartPos, name1EndPos, name2);
	testString = testString += " does!";

	cout << testString << endl;

}

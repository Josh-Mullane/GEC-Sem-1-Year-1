#include <iostream>
#include <string>

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

	testString = "Do you know who loves C++" + name1 + "does!";
	cout << testString << endl;



}

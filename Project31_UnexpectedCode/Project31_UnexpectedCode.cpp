#include <iostream>

using namespace std;

int main()

{

	int count = 3;

	for(int i = 0; i < count; i++)
	{

		cout << i;

		if(i % 2 == 0)

			cout << " is an even number" << endl;

		else

			cout << " is an odd number" << endl;

	}
	cin.get();
	return 0;

}
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
	const int MAX_ITEMS = 4;
	int numItems = 0;
	string inventory[MAX_ITEMS];
	inventory[numItems++] = "sword";
	inventory[numItems++] = "battle axe";
	inventory[numItems++] = "healing potion";
	inventory[numItems++] = "dagger";
	int choice;

	cout << "You come across a staff, do you take it and leave your dagger? (1 for yes, 2 for no)" << endl;
	cin >> choice;

	if (choice == 1)
	{
		inventory[numItems - 1] = "staff";
		cout << "New inventory: " << endl;
		for (int i = 0; i < numItems; ++i)
			cout << i + 1 << ": " << inventory[i] << endl;
	}

	else
	{
		cout << "You leave the staff behind" << endl;
		cout << "Inventory: " << endl;
		for (int i = 0; i < numItems; ++i)
			cout << i + 1 << ": " << inventory[i] << endl;
	}

}


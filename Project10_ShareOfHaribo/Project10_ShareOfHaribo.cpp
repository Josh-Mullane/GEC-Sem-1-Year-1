#include <iostream>
using namespace std;

int main()
{
	int numPackets = 40;
	int numStudents = 14;
	int packPerStudent;
	int remainder;

	packPerStudent = numPackets / numStudents;
	remainder = numPackets % numStudents;

	cout << "Packets per student: " << packPerStudent << endl;
	cout << "Packets left: " << remainder << endl;

}

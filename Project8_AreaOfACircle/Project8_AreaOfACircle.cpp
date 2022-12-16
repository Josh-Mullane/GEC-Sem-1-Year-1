#include <iostream>
using namespace std;

int main()
{
    const float pi = 3.14159f;
    float areaOfCircle, radius;

    radius = 25.0f;

    areaOfCircle = pi * (radius * radius);

    cout << "The area of a circle with a radius of " << radius << " is " << areaOfCircle << endl;
}


#include <iostream>
#include <algorithm>

using namespace std;
bool cardsFound[] = { false };
int attemptCount = 0;
int guessOne, guessTwo;


int main()
{
    char shuffleArray[10] = { 'a', 'a', 'b', 'b', 'c', 'c', 'd', 'd', 'e', 'e', };
    random_shuffle(&shuffleArray[0], &shuffleArray[10]);

}
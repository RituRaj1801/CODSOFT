#include <iostream>
#include <random>
using namespace std;
int main ()
{
  int userGuess;
  random_device rd;
  mt19937 mt (rd ());
  uniform_int_distribution < int >dist (1, 100);
  int random = dist (mt);
  do
    {
        cout << "Enter a number between 1 and 100" << endl;
        cin >> userGuess;
        if (random > userGuess)
	        cout << "random number is greater than " << userGuess << endl;
        else if (random < userGuess)
	        cout << "random number is less than " << userGuess << endl;
        else
	        cout << "You got it right";
}while (userGuess != random);
return 0;
}



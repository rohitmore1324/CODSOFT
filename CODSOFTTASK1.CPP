#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main()
{
    srand(time(0));                     
    int secretNumber = rand() % 100 + 1; 
    cout << "Welcome to Guess My Number!\n";
    cout << "I'm thinking of a number between 1 and 100.\n";
    cout << "You have to guess what it is.\n\n";
    bool keepPlaying = true;
    while (keepPlaying)
    {
        int guess;
        cout << "\nEnter your guess: ";
        cin >> guess;
        if (!cin || guess < 1 || guess > 100)
        {
            cout << "That's not a valid guess! Please enter a number from 1 to 100." << endl;
            continue;
        }
        if (guess == secretNumber)
        {
            cout << "Congratulations, you guessed correctly!" << endl;
            cout << "The number was " << secretNumber << endl;
            keepPlaying = false;
        }
        else if (guess > secretNumber)
        {
            cout << "Your guess is too high. Try again." << endl;
        }
        else
        {
            cout << "Your guess is too low. Try again." << endl;
        }
    }
    return 0;
}

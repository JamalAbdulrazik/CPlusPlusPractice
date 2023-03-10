#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void gussGame();
bool isCorrect(int, int );

int main()
{

    gussGame();
    return 0;
}

void gussGame()
{

    int answer;
    int guess;
    char response;

    do
    {
        answer = 1 + rand() % 1000;

        cout << "I have a number between 1 and 1000.\n"
             << "Can you guess my number?\n"
             << "Please type your first guess." << endl << "? ";

        cin >> guess;

        while (!isCorrect(guess, answer ) )
            cin >> guess;

            
        // prompt for another game
        cout << "\nExcellent! You guessed the number!\n"
             << "Would you like to play again (y or n)? ";
        cin >> response;

        cout << endl;

    } while (response == 'y');
}

bool isCorrect(int g, int a)
{
    if (g == a)
        return true;

    if (g < a)

        cout << "Too Low. Try again\n? ";

    else
        cout << "Too High. Try again\n? ";
    return false;
}
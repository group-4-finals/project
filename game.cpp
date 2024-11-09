#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL)); // Seed the random number generator

    int numBoxes = 25;
    int specialBox = rand() % numBoxes; // Randomly select the special box

    

    // Randomly select a color (you can expand this with more colors)
    string colors[] = {"red", "green", "blue"};
    string specialColor = colors[rand() % 3];

    cout << "Welcome to the Color Guessing Game!" << endl;

    // Display the boxes
    cout << "   1   |   2   |   3   |   4   |   5   \n";
    cout << "-------+-------+-------+-------+-------\n";
    cout << "   6   |   7   |   8   |   9   |  10   \n";
    cout << "-------+-------+-------+-------+-------\n";
    cout << "  11   |  12   |  13   |  14   |  15   \n";
    cout << "-------+-------+-------+-------+-------\n";
    cout << "  16   |  17   |  18   |  19   |  20   \n";
    cout << "-------+-------+-------+-------+-------\n";
    cout << "  21   |  22   |  23   |  24   |  25   \n";

    int userChoice;
    cout << "Choose a box (1-" << numBoxes << "): ";
    cin >> userChoice;

    // Validate user input
    while (userChoice < 1 || userChoice > numBoxes) {
        cout << "Invalid choice. Please enter a number between 1 and " << numBoxes << ": ";
        cin >> userChoice;
    }

    // Guessing phase
    cout << "The special color is: " << specialColor << endl;
    cout << "Does your box have the special color? (y/n): ";
    char guess;
    cin >> guess;

    // Check the guess
    if ((userChoice - 1) == specialBox && guess == 'y') {
        cout << "Congratulations! You guessed correctly!" << endl;
    } else if ((userChoice - 1) != specialBox && guess == 'n') {
        cout << "Congratulations! You guessed correctly!" << endl;
    } else {
        cout << "Sorry, your guess was incorrect." << endl;
        cout << "The special box was Box " << specialBox + 1 << endl;
    }

    return 0;
}
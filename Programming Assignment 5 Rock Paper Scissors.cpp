//Maxx Bierwirth Rock Paper Scissors Assignment 5

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to get the computer's choice
char getComputerChoice() {
    int choice = rand() % 3; // This generates a random number between 0 and 2
    if (choice == 0) return 'R'; // 0 -> Rock
    if (choice == 1) return 'P'; // 1 -> Paper
    return 'S';                  // 2 -> Scissors
}

// Function to get the user's choice
char getUserChoice() {
    char choice;
    cout << "Enter your choice (R for Rock, P for Paper, S for Scissors): ";
    cin >> choice;
    return toupper(choice); // Convert user input to uppercase so they dont have to press shift p,r, or s
}

int main() {
    // This is the random number generator
    srand(static_cast<unsigned int>(time(0)));

    char userChoice, computerChoice;

    cout << "Welcome to Rock, Paper, Scissors!" << endl;

    // Loop until there's a winner
    while (true) {
        // Get choices
        userChoice = getUserChoice();
        computerChoice = getComputerChoice();

        // This code displays what the user and the computer chose
        cout << "You chose: " << userChoice << endl;
        cout << "Computer chose: " << computerChoice << endl;

        // This code checks for a tie
        if (userChoice == computerChoice) {
            cout << "It's a tie! Let's play again." << endl;
            continue;
        }

        // This code checks who wins
        if ((userChoice == 'R' && computerChoice == 'S') ||
            (userChoice == 'P' && computerChoice == 'R') ||
            (userChoice == 'S' && computerChoice == 'P')) {
            cout << "You win!" << endl;
            break;
        }
        else {
            cout << "Computer wins!" << endl;
            break;
        }
    }

    return 0;
}

//Maxx Bierwirth 10/5/24 Breaking cents down into currency

#include <iostream>

using namespace std;

int main() {
    // This code defines currency values and names
    int values[5] = { 100, 25, 10, 5, 1 };  // Dollar, Quarter, Dime, Nickel, Penny values in cents
    string names[5] = { "dollars", "quarters", "dimes", "nickels", "pennies" };

    // This code inputs the total cents
    int totalCents;
    cout << "Enter total cents: ";
    cin >> totalCents;

    // This code stores how many of each currency type
    int result[5] = { 0 };  // Initialize array to store counts of each currency

    // This calculates the number of each currency type
    for (int i = 0; i < 5; i++) {
        result[i] = totalCents / values[i];  // Find how many of that currency fit into totalCents
        totalCents %= values[i];             // Update totalCents with the remaining amount
    }

    // This outputs the results
    cout << "This corresponds to ";
    for (int i = 0; i < 5; i++) {
        cout << result[i] << " " << names[i];
        if (i < 4) {
            cout << ", ";
        }
    }
    cout << "." << endl;

    return 0;
}

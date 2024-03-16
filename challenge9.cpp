#include<iostream>
#include<vector>
#include<limits>

using namespace std;

int main() {
    vector<int> data{};
    char choice{};

    do {
        cout << "P - Print numbers" << endl;
        cout << "A - Add a number" << endl;
        cout << "M - Display mean of the numbers" << endl;
        cout << "S - Display the smallest number" << endl;
        cout << "L - Display the largest number" << endl;
        cout << "Q - Quit" << endl;

        cout << "\nEnter your choice: ";
        cin >> choice;

        if (choice == 'P' || choice == 'p') {
            if (data.empty()) {
                cout << "[] - the list is empty" << endl;
            } else {
                cout << "[ ";
                for (int num : data) {
                    cout << num << " ";
                }
                cout << "]" << endl;
            }
        } else if (choice == 'A' || choice == 'a') {
            cout << "Enter an integer to add: ";
            int numToAdd;
            cin >> numToAdd;
            data.push_back(numToAdd);
            cout << numToAdd << " added" << endl;
        } else if (choice == 'M' || choice == 'm') {
            if (data.empty()) {
                cout << "Unable to calculate the mean - no data" << endl;
            } else {
                double total = 0;
                for (int num : data) {
                    total += num;
                }
                cout << "Mean: " << (total / data.size()) << endl;
            }
        } else if (choice == 'S' || choice == 's') {
            if (data.empty()) {
                cout << "Unable to determine the smallest number - list is empty" << endl;
            } else {
                int smallest = data[0];
                for (int num : data) {
                    if (num < smallest) {
                        smallest = num;
                    }
                }
                cout << "The smallest number is " << smallest << endl;
            }
        } else if (choice == 'L' || choice == 'l') {
            if (data.empty()) {
                cout << "Unable to determine the largest number - list is empty" << endl;
            } else {
                int largest = data[0];
                for (int num : data) {
                    if (num > largest) {
                        largest = num;
                    }
                }
                cout << "The largest number is " << largest << endl;
            }
        }
    } while (choice != 'Q' && choice != 'q');

    cout << "Goodbye!" << endl;

    return 0;
}
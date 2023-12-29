#include <iostream>
#include <string>
#include"Runner.h"
#include"MarathonRegistration.h"

using namespace std;

int main() {
    MarathonQueue runners;

    int choice;
    int searchNumber;
    string searchName;

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add Runner" << endl;
        cout << "2. Search Runner" << endl;
        cout << "3. Edit Runner" << endl;
        cout << "4. Delete Runner" << endl;
        cout << "5. Display Runners" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                string name, country;
                int age;

                cout << "Enter runner details:" << endl;
                cout << "Enter name: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, name);
                cout << "Enter age: ";
                cin >> age;
                cout << "Enter country: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, country);

                Runner newRunner(name, age, country);
                runners.enqueue(newRunner);
                cout << "Runner added successfully!" << endl;
                break;
            }
            case 2: {
                cout << "Enter runner name to search: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, searchName);
                if (!runners.searchRunner(searchName)) {
                    cout << "Runner not found." << endl;
                }
                break;
            }
            case 3: {
                cout << "Enter runner name to edit: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, searchName);
                int newAge;
                string newCountry;
                cout << "Enter new age: ";
                cin >> newAge;
                cout << "Enter new country: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, newCountry);
                runners.editRunner(searchName, newAge, newCountry);
                cout << "Runner edited successfully!" << endl;
                break;
            }
            case 4: {
                cout << "Enter runner name to delete: ";
                cin.ignore(); // Clear the newline character from the buffer
                getline(cin, searchName);
                runners.deleteRunner(searchName);
                cout << "Runner deleted successfully!" << endl;
                break;
            }
            case 5:
                cout << "Runners:" << endl;
                runners.displayQueue();
                break;
            case 6:
                cout << "Exiting program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 6);

    return 0;
}

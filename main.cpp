#include <iostream>
#include <string>
#include"Runner.h"
#include"MarathonRegistration.h"

using namespace std;

int main()
{
	MarathonQueue runners;
    int choice;
    int searchNumber;
    string searchName;

    cout << "\t\t\t\t\t\t Welecome to EGY-Marathon\n\n\n\n\n";

    do {
        cout << "\nMenu:" << endl;
        cout << "1. Add Runner" << endl;
        cout << "2. Search Runner with name" << endl;
        cout << "3. Search Runner with number" << endl;
        cout << "4. Edit Runner with name" << endl;
        cout << "5. Edit Runner with number" << endl;
        cout << "6. Delete Runner with name" << endl;
        cout << "7. Delete Runner with number" << endl;
        cout << "8. Display Runners" << endl;
        cout << "9. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1: {
            string name, gender, country;
            int id, age, weight;
            cout << "Enter runner details:" << endl;
            cout << "Enter runner no.: ";
            cin >> id;
            cout << "Enter runner name: ";
            cin.ignore();
            getline(cin, name);
            cout << "Enter runner age: ";
            cin >> age;
            cout << "Enter runner gender: ";
            cin.ignore();
            getline(cin, gender);
            cout << "Enter runner weight: ";
            cin >> weight;
            cout << "Enter runner country: ";
            cin.ignore();
            getline(cin, country);

            Runner newRunner(id, name, age, gender, weight, country);
            runners.enqueue(newRunner);
            cout << "Runner added successfully!" << endl;
            break;
            }
            case 2: {
                cout << "Enter runner name to search: ";
                cin.ignore();
                getline(cin, searchName);
                if (!runners.searchRunnerByName(searchName)) {
                    cout << "Runner not found." << endl;
                }
                break;
            }
            case 3: {
                cout << "Enter runner number to search: ";
                cin.ignore();
                cin >> searchNumber;
                if (!runners.searchRunnerById(searchNumber)) {
                    cout << "Runner not found." << endl;
                }
                break;
            }
            case 4: {
                cout << "Enter runner name to edit: ";
                cin.ignore();
                getline(cin, searchName);
                int newId, newAge,newWeight;
                string newGender, newCountry;
                cout << "Enter new number: ";
                cin >> newId;
                cout << "Enter new age: ";
                cin >> newAge;
                cout << "Enter new gender: ";
                cin.ignore();
                getline(cin, newGender);
                cout << "Enter new weight: ";
                cin >> newWeight;
                cout << "Enter new country: ";
                cin.ignore();
                getline(cin, newCountry);
                runners.editRunnerByName(searchName,newId, newAge, newGender, newWeight, newCountry);
                cout << "Runner edited successfully!" << endl;
                break;
                }
            case 5: {
                cout << "Enter runner number to edit: ";
                cin >> searchNumber;
                int newAge, newWeight;
                string newName, newGender, newCountry;
                cout << "Enter new name: ";
                cin >> newName;
                cout << "Enter new age: ";
                cin >> newAge;
                cout << "Enter new gender: ";
                cin.ignore();
                getline(cin, newGender);
                cout << "Enter new weight: ";
                cin >> newWeight;
                cout << "Enter new country: ";
                cin.ignore();
                getline(cin, newCountry);
                runners.editRunnerById(searchNumber, newName, newAge, newGender, newWeight, newCountry);
                cout << "Runner edited successfully!" << endl;
                break;
            }
            case 6: {
                cout << "Enter runner name to delete: ";
                cin.ignore(); 
                getline(cin, searchName);
                runners.deleteRunnerByName(searchName);
                cout << "Runner deleted successfully!" << endl;
                break;
                }
            case 7: {
                cout << "Enter runner number to delete: ";
                cin.ignore(); 
                cin >> searchNumber;
                runners.deleteRunnerById(searchNumber);
                cout << "Runner deleted successfully!" << endl;
                break;
            }
            case 8: {

                cout << "Runners:" << endl;
                runners.displayQueue();
                break;
            }
            case 9: {

                cout << "Exiting program." << endl;
                break;
            }
            default:
                cout << "Invalid choice. Please try again." << endl;
        }

    } while (choice != 9);

    return 0;
}

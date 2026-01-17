#include <iostream>
#include <fstream>
using namespace std;

// Function to write data to a file
void writeFile() {
    ofstream file("data.txt");
    string content;

    cout << "Enter text to write into the file:\n";
    cin.ignore();
    getline(cin, content);

    file << content << endl;
    file.close();
    cout << "Data written successfully.\n";
}
// Function to append data to a file
void appendFile() {
    ofstream file("data.txt", ios::app);
    string content;

    cout << "Enter text to append into the file:\n";
    cin.ignore();
    getline(cin, content);

    file << content << endl;
    file.close();
    cout << "Data appended successfully.\n";
}
// Function to read data from a file
void readFile() {
    ifstream file("data.txt");
    string line;

    cout << "\n--- File Contents ---\n";
    while (getline(file, line)) {
        cout << line << endl;
    }
    file.close();
}

int main() {
    int choice;

    do {        // Menu display
        cout << "\nFILE MANAGEMENT TOOL\n";
        cout << "1. Write to File\n";
        cout << "2. Append to File\n";
        cout << "3. Read File\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: writeFile(); break;// Write
            case 2: appendFile(); break;// Append
            case 3: readFile(); break;// Read
            case 4: cout << "Program terminated.\n"; break; // Exit
            default: cout << "Invalid choice. Try again.\n";// Invalid choice
        }
    } while (choice != 4);

    return 0;
}

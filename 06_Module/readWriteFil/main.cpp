#include <fstream>
#include <iostream>

using namespace std;

int main(void)
{
    // open a file for writting output to
    ofstream outFS("output.txt");

    // check if file opened successfully
    if (!outFS) {
        cerr << "Error opening file for write access!" << endl;
        return 1; // return an error code
    }

    // else we write data to the file
    outFS << "Hello, line one!" << endl;
    outFS << "C++ writting to a file. Line two." << endl;

    // close the open file
    outFS.close();

    // read from the same file
    ifstream inFS("output.txt");

    if (!inFS.is_open()) {
        cerr << "Failed to open the file." << endl;
        return 1; // return an error code
    }

    // else read file content
    string line;
    while (getline(inFS, line)) {
        cout << line << endl;
    }

    // close the open file
    inFS.close();

    return 0;
}

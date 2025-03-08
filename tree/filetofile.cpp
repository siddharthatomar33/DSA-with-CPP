#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void appendFile(const string& sourceFile, const string& destFile) {
    ifstream src(sourceFile, ios::in); // Open source file for reading
    ofstream dest(destFile, ios::app); // Open destination file for appending

    if (!src.is_open() || !dest.is_open()) {
        cerr << "Error opening files!" << endl;
        return;
    }

    string line;
    while (getline(src, line)) {
        dest << line << endl; // Write each line from source file to destination file
    }

    src.close();
    dest.close();
}

int main() {
    string sourceFile = "source.txt";
    string destFile = "destination.txt";

    appendFile(sourceFile, destFile);

    cout << "Contents of " << sourceFile << " have been appended to " << destFile << endl;

    return 0;
}

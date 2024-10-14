 #include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ifstream inFile("example.txt");
    string fileContent = "";
    string line;
    if (inFile) {
        while (getline(inFile, line)) {
            fileContent += line + "\n";   
        }
        inFile.close();
    }

    // Now write back the old content and the new content
    ofstream outFile("example.txt");  

    if (!outFile) {  
         cout << "Error opening file!" << endl;
        return 1;
    }
    outFile << fileContent;
    // Append new text
    outFile << "Appending a new line to the existing file.\n";
    outFile << "File handling in C++ is powerful!\n";
    outFile.close();  // Close the file
    cout << "Data successfully appended to example.txt" << endl;
    return 0;
}

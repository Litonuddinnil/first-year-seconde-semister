 #include <iostream>
#include <fstream>
#include <string>

using namespace std;

void findAndReplace(string fileName, string oldWord, string newWord) {
    ifstream readFile(fileName);  // Open file for reading
    if (!readFile) {
        cerr << "Error: Cannot open the file!" << endl;
        return;
    }

    string fileContent = "";
    string line;

    // Read the file line by line
    while (getline(readFile, line)) {
        // Replace all occurrences of the old word with the new word
        size_t pos;
        while ((pos = line.find(oldWord)) != string::npos) {
            line.replace(pos, oldWord.length(), newWord);
        }
        fileContent += line + "\n";
    }

    readFile.close();  // Close the file after reading

    // Write the modified content back to the file
    ofstream writeFile(fileName);
    if (!writeFile) {
        cerr << "Error: Cannot write to the file!" << endl;
        return;
    }
    
    writeFile << fileContent;  // Write the updated content to the file
    writeFile.close();  // Close the file after writing

    cout << "All occurrences of '" << oldWord << "' have been replaced with '" << newWord << "' in " << fileName << endl;
}

int main() {
    string fileName = "example.txt";
    string oldWord = "old";  // Word to be replaced
    string newWord = "new";  // Replacement word

    findAndReplace(fileName, oldWord, newWord);

    return 0;
}

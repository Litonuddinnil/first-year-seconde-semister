#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream sourceFile("sourcefile.txt");
    ofstream destinationFile("destinationfile.txt");
    string line;
    while ( getline(sourceFile,line))
    {
         destinationFile<<line<<endl;
    }
    sourceFile.close();
    destinationFile.close();
    cout<<"successfully copy textfile to another textfile!"<<endl;
    
 return 0;
}
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string read;
    ifstream readFile("problemTwo.txt");
    while ( getline(readFile,read))
    {
         cout<<read;
    }
    readFile.close();
    
 return 0;
}
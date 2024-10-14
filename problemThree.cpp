#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream Myfile("problemThree.txt");
    string line;
    int line_count=0;
    while ( getline(Myfile,line))
    {
       ++line_count;
    }
    Myfile.close();
    cout<<"My text line count:"<<line_count<<endl;
    
 return 0;
}
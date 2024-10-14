#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream myFile("problemFour.txt");
    string word;
    int word_count =0;
    while(myFile>>word){
        ++word_count;
    }
    myFile.close();
         cout<<"My text word count of sentence:"<<word_count<<endl;
   
 return 0;
}
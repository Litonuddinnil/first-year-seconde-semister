#include<iostream>
#include<fstream>
using namespace std;
int main(){ 
    ofstream Myfile("problemOne.txt");
     Myfile<<"1.Write a C++ program to create a new text file and write some text into it.";
    Myfile.close();
}
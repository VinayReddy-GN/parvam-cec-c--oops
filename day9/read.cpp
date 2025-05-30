#include<iostream>
#include<fstream>
using namespace std;

int main(){
    ifstream read("a.txt");
    string file_content;
    //syntax for using the getline;
    //setline(object , string)
    getline(read , file_content);
    cout << "the file contains : " << endl;
    cout << file_content << endl;
    read.close();

    //to print all the lines,we need to make use of some loop
    ifstream show("a.txt");
    string all_lines;
    
    cout << "the file contains : " << endl;
    while(getline(show , all_lines)){
        cout << all_lines << endl;
    }
    //to print the first character of the file
    read.close();

    //to print the first character of the file
    ifstream fin("a.txt");
    char letter;
    fin.get(letter);
    cout << "the first letter of the file is : "<< letter << endl;
    fin.close();
}